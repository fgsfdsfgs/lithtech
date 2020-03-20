project( FEAR_ClientFXDLL )

set(SOURCES
  src/BaseCreateFX.cpp
  src/BaseFx.cpp
  src/BaseSpriteFX.cpp
  src/CameraShakeFX.cpp
  src/clientfx.cpp
  src/ClientFXVertexDeclMgr.cpp
  src/CreateFX.cpp
  src/CreateRayFX.cpp
  src/DebrisSystemFX.cpp
  src/DebrisSystemProps.cpp
  ../Shared/DebugNew.cpp
  src/DecalFX.cpp
  src/dynalightfx.cpp
  src/FlareSpriteFX.cpp
  src/LensFlareFX.cpp
  src/lightningfx.cpp
  src/LightningProps.cpp
  src/ltbmodelfx.cpp
  ../../runtime/kernel/mem/src/ltmemory.cpp # currently not found in the source tree
  ../../sdk/inc/ltmodule.cpp
  ../../sdk/inc/ltobjref.cpp
  src/MemoryPageMgr.cpp
  src/OverlayFX.cpp
  src/ParticleSimulation.cpp
  src/ParticleSystemFX.cpp
  src/ParticleSystemGroup.cpp
  src/ParticleSystemProps.cpp
#  ../../sdk/inc/performancemonitorhook.cpp # currently not found in the source tree
  src/PolyTrailFX.cpp
  src/PolyTrailProps.cpp
  src/RumbleFX.cpp
  src/Soundfx.cpp
  src/spritefx.cpp
  src/stdafx.cpp
  src/TracerFX.cpp
  src/VideoControllerFX.cpp
)

include_directories(
  ../../sdk/inc
  ../../libs/lith
  ../../libs/stdlith
  ../../libs/WONAPI
  ../Shared
)

add_definitions(
  -DMEMTRACK_CLIENTFX
  -D_DEBUG
)
if(WIN32)
add_definitions(
  -DWIN32
  -D_WINDOWS
)
else(WIN32)
add_definitions(
  -D_LINUX
  -D__LINUX
)
include_directories(src/sys/linux)
endif(WIN32)

add_library( ${PROJECT_NAME} SHARED ${SOURCES} )

target_link_libraries( ${PROJECT_NAME} shared_assert )

if(CMAKE_COMPILER_IS_GNUCXX)
  set_target_properties(${PROJECT_NAME} PROPERTIES COMPILE_FLAGS "-fpermissive")
endif(CMAKE_COMPILER_IS_GNUCXX)
