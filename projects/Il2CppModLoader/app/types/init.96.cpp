#include <Il2CppModLoader/app/types/AppContextSwitches.h>
#include <Il2CppModLoader/app/types/CaptureAgentUtils.h>
#include <Il2CppModLoader/app/types/CertificateValidationHelper.h>
#include <Il2CppModLoader/app/types/ChallengeResponse2.h>
#include <Il2CppModLoader/app/types/CharUnicodeInfo.h>
#include <Il2CppModLoader/app/types/CharacterInteractables.h>
#include <Il2CppModLoader/app/types/ClientInformation.h>
#include <Il2CppModLoader/app/types/CodeIdentifier.h>
#include <Il2CppModLoader/app/types/CompModSwitches.h>
#include <Il2CppModLoader/app/types/ConditionBasedBrainController_BranchingBoolEntries__Enum.h>
#include <Il2CppModLoader/app/types/EncodingTable.h>
#include <Il2CppModLoader/app/types/HashHelpers_1.h>
#include <Il2CppModLoader/app/types/Items.h>
#include <Il2CppModLoader/app/types/LifetimeServices.h>
#include <Il2CppModLoader/app/types/LightCanvas_LightCanvasGuidManager.h>
#include <Il2CppModLoader/app/types/Logging.h>
#include <Il2CppModLoader/app/types/MSCompatUnicodeTable.h>
#include <Il2CppModLoader/app/types/MonoIO.h>
#include <Il2CppModLoader/app/types/MonoTlsProviderFactory.h>
#include <Il2CppModLoader/app/types/MoonApplication.h>
#include <Il2CppModLoader/app/types/Music.h>
#include <Il2CppModLoader/app/types/Physics2D.h>
#include <Il2CppModLoader/app/types/PortalVistor.h>
#include <Il2CppModLoader/app/types/ScrollLocks.h>
#include <Il2CppModLoader/app/types/SeinEvents.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Pixel_Pixelisation.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Pixelisation_Dot.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Pixelisation_OilPaint.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Pixelisation_OilPaintHQ.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Real_VHS.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Retro_Loading.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Sharpen_Sharpen.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Special_Bubble.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_TV_50.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_TV_80.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_TV_ARCADE.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_TV_ARCADE_2.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_TV_ARCADE_Fast.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_TV_Artefact.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_TV_BrokenGlass.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_TV_BrokenGlass2.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_TV_Chromatical.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_TV_Chromatical2.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_TV_CompressionFX.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_TV_Distorted.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_TV_Horror.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_TV_LED.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_TV_Noise.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_TV_Old.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_TV_Old_Movie.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_TV_Old_Movie_2.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_TV_PlanetMars.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_TV_Posterize.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_TV_Rgb.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_TV_Tiles.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_TV_VHS.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_TV_VHS_Rewind.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_TV_Vcr.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_TV_Video3D.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_TV_Videoflip.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_TV_Vintage.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_TV_WideScreenCircle.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_TV_WideScreenHV.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_TV_WideScreenHorizontal.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_TV_WideScreenVertical.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_VHS_Tracking.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Vision_Aura.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Vision_AuraDistortion.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Vision_Blood.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Vision_Blood_Fast.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Vision_Crystal.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Vision_Drost.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Vision_Hell_Blood.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Vision_Plasma.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Vision_Psycho.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Vision_Rainbow.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Vision_Tunnel.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Vision_Warp.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Vision_Warp2.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraMotionBlur.h>
#include <Il2CppModLoader/app/types/ShaderID_ChannelClamper.h>
#include <Il2CppModLoader/app/types/ShaderID_ChannelMixer.h>
#include <Il2CppModLoader/app/types/ShaderID_ChannelSwapper.h>
#include <Il2CppModLoader/app/types/ShaderID_CharacterAnimationSimple.h>
#include <Il2CppModLoader/app/types/ShaderID_CharacterAnimationThirdPerson.h>
#include <Il2CppModLoader/app/types/ShaderID_ChromaticAberration.h>
#include <Il2CppModLoader/app/types/ShaderID_ColorCorrectionCurves.h>
#include <Il2CppModLoader/app/types/ShaderID_ColorCorrectionEffect.h>
#include <Il2CppModLoader/app/types/ShaderID_ColorCorrectionLookup.h>
#include <Il2CppModLoader/app/types/ShaderID_ComicBook.h>
#include <Il2CppModLoader/app/types/Shader_Globals.h>
#include <Il2CppModLoader/app/types/SoapServices.h>
#include <Il2CppModLoader/app/types/SystemCertificateValidator.h>
#include <Il2CppModLoader/app/types/TailoringInfo__Array.h>
#include <Il2CppModLoader/app/types/TimerThread.h>
#include <Il2CppModLoader/app/types/UberGCManager.h>
#include <Il2CppModLoader/app/types/UberGCManager_GcCleanupReason__Enum.h>
#include <Il2CppModLoader/app/types/UberShaderRenderQueue.h>
#include <Il2CppModLoader/app/types/UberStateConditionHelper.h>
#include <Il2CppModLoader/app/types/UnityTls.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Pixel_Pixelisation {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Pixel_Pixelisation__Class** type_info = (::app::ShaderID_CameraFilterPack_Pixel_Pixelisation__Class**)(modloader::win::memory::resolve_rva(0x0472A778));
    }
    namespace ShaderID_CameraFilterPack_Pixelisation_Dot {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Pixelisation_Dot__Class** type_info = (::app::ShaderID_CameraFilterPack_Pixelisation_Dot__Class**)(modloader::win::memory::resolve_rva(0x04774CB8));
    }
    namespace ShaderID_CameraFilterPack_Pixelisation_OilPaintHQ {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Pixelisation_OilPaintHQ__Class** type_info = (::app::ShaderID_CameraFilterPack_Pixelisation_OilPaintHQ__Class**)(modloader::win::memory::resolve_rva(0x0471D3C0));
    }
    namespace ShaderID_CameraFilterPack_Pixelisation_OilPaint {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Pixelisation_OilPaint__Class** type_info = (::app::ShaderID_CameraFilterPack_Pixelisation_OilPaint__Class**)(modloader::win::memory::resolve_rva(0x04778AE8));
    }
    namespace ShaderID_CameraFilterPack_Real_VHS {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Real_VHS__Class** type_info = (::app::ShaderID_CameraFilterPack_Real_VHS__Class**)(modloader::win::memory::resolve_rva(0x04709CA8));
    }
    namespace ShaderID_CameraFilterPack_Retro_Loading {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Retro_Loading__Class** type_info = (::app::ShaderID_CameraFilterPack_Retro_Loading__Class**)(modloader::win::memory::resolve_rva(0x047957D8));
    }
    namespace ShaderID_CameraFilterPack_Sharpen_Sharpen {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Sharpen_Sharpen__Class** type_info = (::app::ShaderID_CameraFilterPack_Sharpen_Sharpen__Class**)(modloader::win::memory::resolve_rva(0x0474D508));
    }
    namespace ShaderID_CameraFilterPack_Special_Bubble {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Special_Bubble__Class** type_info = (::app::ShaderID_CameraFilterPack_Special_Bubble__Class**)(modloader::win::memory::resolve_rva(0x04728F70));
    }
    namespace ShaderID_CameraFilterPack_TV_50 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_TV_50__Class** type_info = (::app::ShaderID_CameraFilterPack_TV_50__Class**)(modloader::win::memory::resolve_rva(0x04782258));
    }
    namespace ShaderID_CameraFilterPack_TV_80 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_TV_80__Class** type_info = (::app::ShaderID_CameraFilterPack_TV_80__Class**)(modloader::win::memory::resolve_rva(0x0470EE50));
    }
    namespace ShaderID_CameraFilterPack_TV_ARCADE_2 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_TV_ARCADE_2__Class** type_info = (::app::ShaderID_CameraFilterPack_TV_ARCADE_2__Class**)(modloader::win::memory::resolve_rva(0x0478EA38));
    }
    namespace ShaderID_CameraFilterPack_TV_ARCADE_Fast {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_TV_ARCADE_Fast__Class** type_info = (::app::ShaderID_CameraFilterPack_TV_ARCADE_Fast__Class**)(modloader::win::memory::resolve_rva(0x04795BA8));
    }
    namespace ShaderID_CameraFilterPack_TV_ARCADE {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_TV_ARCADE__Class** type_info = (::app::ShaderID_CameraFilterPack_TV_ARCADE__Class**)(modloader::win::memory::resolve_rva(0x0476E0A0));
    }
    namespace ShaderID_CameraFilterPack_TV_Artefact {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_TV_Artefact__Class** type_info = (::app::ShaderID_CameraFilterPack_TV_Artefact__Class**)(modloader::win::memory::resolve_rva(0x04768FE8));
    }
    namespace ShaderID_CameraFilterPack_TV_BrokenGlass2 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_TV_BrokenGlass2__Class** type_info = (::app::ShaderID_CameraFilterPack_TV_BrokenGlass2__Class**)(modloader::win::memory::resolve_rva(0x04726FB8));
    }
    namespace ShaderID_CameraFilterPack_TV_BrokenGlass {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_TV_BrokenGlass__Class** type_info = (::app::ShaderID_CameraFilterPack_TV_BrokenGlass__Class**)(modloader::win::memory::resolve_rva(0x047315D8));
    }
    namespace ShaderID_CameraFilterPack_TV_Chromatical2 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_TV_Chromatical2__Class** type_info = (::app::ShaderID_CameraFilterPack_TV_Chromatical2__Class**)(modloader::win::memory::resolve_rva(0x04729F30));
    }
    namespace ShaderID_CameraFilterPack_TV_Chromatical {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_TV_Chromatical__Class** type_info = (::app::ShaderID_CameraFilterPack_TV_Chromatical__Class**)(modloader::win::memory::resolve_rva(0x047507D0));
    }
    namespace ShaderID_CameraFilterPack_TV_CompressionFX {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_TV_CompressionFX__Class** type_info = (::app::ShaderID_CameraFilterPack_TV_CompressionFX__Class**)(modloader::win::memory::resolve_rva(0x0474B4C8));
    }
    namespace ShaderID_CameraFilterPack_TV_Distorted {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_TV_Distorted__Class** type_info = (::app::ShaderID_CameraFilterPack_TV_Distorted__Class**)(modloader::win::memory::resolve_rva(0x0478E468));
    }
    namespace ShaderID_CameraFilterPack_TV_Horror {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_TV_Horror__Class** type_info = (::app::ShaderID_CameraFilterPack_TV_Horror__Class**)(modloader::win::memory::resolve_rva(0x04711498));
    }
    namespace ShaderID_CameraFilterPack_TV_LED {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_TV_LED__Class** type_info = (::app::ShaderID_CameraFilterPack_TV_LED__Class**)(modloader::win::memory::resolve_rva(0x0476AC30));
    }
    namespace ShaderID_CameraFilterPack_TV_Noise {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_TV_Noise__Class** type_info = (::app::ShaderID_CameraFilterPack_TV_Noise__Class**)(modloader::win::memory::resolve_rva(0x047941D0));
    }
    namespace ShaderID_CameraFilterPack_TV_Old_Movie_2 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_TV_Old_Movie_2__Class** type_info = (::app::ShaderID_CameraFilterPack_TV_Old_Movie_2__Class**)(modloader::win::memory::resolve_rva(0x0473A388));
    }
    namespace ShaderID_CameraFilterPack_TV_Old_Movie {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_TV_Old_Movie__Class** type_info = (::app::ShaderID_CameraFilterPack_TV_Old_Movie__Class**)(modloader::win::memory::resolve_rva(0x04724B10));
    }
    namespace ShaderID_CameraFilterPack_TV_Old {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_TV_Old__Class** type_info = (::app::ShaderID_CameraFilterPack_TV_Old__Class**)(modloader::win::memory::resolve_rva(0x04722BF8));
    }
    namespace ShaderID_CameraFilterPack_TV_PlanetMars {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_TV_PlanetMars__Class** type_info = (::app::ShaderID_CameraFilterPack_TV_PlanetMars__Class**)(modloader::win::memory::resolve_rva(0x047437B8));
    }
    namespace ShaderID_CameraFilterPack_TV_Posterize {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_TV_Posterize__Class** type_info = (::app::ShaderID_CameraFilterPack_TV_Posterize__Class**)(modloader::win::memory::resolve_rva(0x0472BBA8));
    }
    namespace ShaderID_CameraFilterPack_TV_Rgb {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_TV_Rgb__Class** type_info = (::app::ShaderID_CameraFilterPack_TV_Rgb__Class**)(modloader::win::memory::resolve_rva(0x04757280));
    }
    namespace ShaderID_CameraFilterPack_TV_Tiles {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_TV_Tiles__Class** type_info = (::app::ShaderID_CameraFilterPack_TV_Tiles__Class**)(modloader::win::memory::resolve_rva(0x047260C8));
    }
    namespace ShaderID_CameraFilterPack_TV_VHS {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_TV_VHS__Class** type_info = (::app::ShaderID_CameraFilterPack_TV_VHS__Class**)(modloader::win::memory::resolve_rva(0x04781A40));
    }
    namespace ShaderID_CameraFilterPack_TV_VHS_Rewind {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_TV_VHS_Rewind__Class** type_info = (::app::ShaderID_CameraFilterPack_TV_VHS_Rewind__Class**)(modloader::win::memory::resolve_rva(0x04728270));
    }
    namespace ShaderID_CameraFilterPack_TV_Vcr {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_TV_Vcr__Class** type_info = (::app::ShaderID_CameraFilterPack_TV_Vcr__Class**)(modloader::win::memory::resolve_rva(0x04707A78));
    }
    namespace ShaderID_CameraFilterPack_TV_Video3D {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_TV_Video3D__Class** type_info = (::app::ShaderID_CameraFilterPack_TV_Video3D__Class**)(modloader::win::memory::resolve_rva(0x04714C58));
    }
    namespace ShaderID_CameraFilterPack_TV_Videoflip {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_TV_Videoflip__Class** type_info = (::app::ShaderID_CameraFilterPack_TV_Videoflip__Class**)(modloader::win::memory::resolve_rva(0x04771068));
    }
    namespace ShaderID_CameraFilterPack_TV_Vintage {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_TV_Vintage__Class** type_info = (::app::ShaderID_CameraFilterPack_TV_Vintage__Class**)(modloader::win::memory::resolve_rva(0x04725CA8));
    }
    namespace ShaderID_CameraFilterPack_TV_WideScreenCircle {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_TV_WideScreenCircle__Class** type_info = (::app::ShaderID_CameraFilterPack_TV_WideScreenCircle__Class**)(modloader::win::memory::resolve_rva(0x04798618));
    }
    namespace ShaderID_CameraFilterPack_TV_WideScreenHV {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_TV_WideScreenHV__Class** type_info = (::app::ShaderID_CameraFilterPack_TV_WideScreenHV__Class**)(modloader::win::memory::resolve_rva(0x0476A2B8));
    }
    namespace ShaderID_CameraFilterPack_TV_WideScreenHorizontal {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_TV_WideScreenHorizontal__Class** type_info = (::app::ShaderID_CameraFilterPack_TV_WideScreenHorizontal__Class**)(modloader::win::memory::resolve_rva(0x04791298));
    }
    namespace ShaderID_CameraFilterPack_TV_WideScreenVertical {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_TV_WideScreenVertical__Class** type_info = (::app::ShaderID_CameraFilterPack_TV_WideScreenVertical__Class**)(modloader::win::memory::resolve_rva(0x0476D520));
    }
    namespace ShaderID_CameraFilterPack_VHS_Tracking {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_VHS_Tracking__Class** type_info = (::app::ShaderID_CameraFilterPack_VHS_Tracking__Class**)(modloader::win::memory::resolve_rva(0x047810F8));
    }
    namespace ShaderID_CameraFilterPack_Vision_AuraDistortion {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Vision_AuraDistortion__Class** type_info = (::app::ShaderID_CameraFilterPack_Vision_AuraDistortion__Class**)(modloader::win::memory::resolve_rva(0x04729D40));
    }
    namespace ShaderID_CameraFilterPack_Vision_Aura {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Vision_Aura__Class** type_info = (::app::ShaderID_CameraFilterPack_Vision_Aura__Class**)(modloader::win::memory::resolve_rva(0x0470EE58));
    }
    namespace ShaderID_CameraFilterPack_Vision_Blood_Fast {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Vision_Blood_Fast__Class** type_info = (::app::ShaderID_CameraFilterPack_Vision_Blood_Fast__Class**)(modloader::win::memory::resolve_rva(0x04779170));
    }
    namespace ShaderID_CameraFilterPack_Vision_Blood {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Vision_Blood__Class** type_info = (::app::ShaderID_CameraFilterPack_Vision_Blood__Class**)(modloader::win::memory::resolve_rva(0x0475B108));
    }
    namespace ShaderID_CameraFilterPack_Vision_Crystal {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Vision_Crystal__Class** type_info = (::app::ShaderID_CameraFilterPack_Vision_Crystal__Class**)(modloader::win::memory::resolve_rva(0x04744848));
    }
    namespace ShaderID_CameraFilterPack_Vision_Drost {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Vision_Drost__Class** type_info = (::app::ShaderID_CameraFilterPack_Vision_Drost__Class**)(modloader::win::memory::resolve_rva(0x047425C8));
    }
    namespace ShaderID_CameraFilterPack_Vision_Hell_Blood {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Vision_Hell_Blood__Class** type_info = (::app::ShaderID_CameraFilterPack_Vision_Hell_Blood__Class**)(modloader::win::memory::resolve_rva(0x047389F0));
    }
    namespace ShaderID_CameraFilterPack_Vision_Plasma {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Vision_Plasma__Class** type_info = (::app::ShaderID_CameraFilterPack_Vision_Plasma__Class**)(modloader::win::memory::resolve_rva(0x047902B8));
    }
    namespace ShaderID_CameraFilterPack_Vision_Psycho {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Vision_Psycho__Class** type_info = (::app::ShaderID_CameraFilterPack_Vision_Psycho__Class**)(modloader::win::memory::resolve_rva(0x0471D290));
    }
    namespace ShaderID_CameraFilterPack_Vision_Rainbow {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Vision_Rainbow__Class** type_info = (::app::ShaderID_CameraFilterPack_Vision_Rainbow__Class**)(modloader::win::memory::resolve_rva(0x0470E730));
    }
    namespace ShaderID_CameraFilterPack_Vision_Tunnel {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Vision_Tunnel__Class** type_info = (::app::ShaderID_CameraFilterPack_Vision_Tunnel__Class**)(modloader::win::memory::resolve_rva(0x04733C88));
    }
    namespace ShaderID_CameraFilterPack_Vision_Warp2 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Vision_Warp2__Class** type_info = (::app::ShaderID_CameraFilterPack_Vision_Warp2__Class**)(modloader::win::memory::resolve_rva(0x04746FE0));
    }
    namespace ShaderID_CameraFilterPack_Vision_Warp {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Vision_Warp__Class** type_info = (::app::ShaderID_CameraFilterPack_Vision_Warp__Class**)(modloader::win::memory::resolve_rva(0x04767DE0));
    }
    namespace ShaderID_CameraMotionBlur {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraMotionBlur__Class** type_info = (::app::ShaderID_CameraMotionBlur__Class**)(modloader::win::memory::resolve_rva(0x0470A210));
    }
    namespace MoonApplication {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MoonApplication__Class** type_info = (::app::MoonApplication__Class**)(modloader::win::memory::resolve_rva(0x04747748));
    }
    namespace Shader_Globals {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Shader_Globals__Class** type_info = (::app::Shader_Globals__Class**)(modloader::win::memory::resolve_rva(0x0474B470));
    }
    namespace ScrollLocks {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ScrollLocks__Class** type_info = (::app::ScrollLocks__Class**)(modloader::win::memory::resolve_rva(0x04762CD8));
    }
    namespace AppContextSwitches {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AppContextSwitches__Class** type_info = (::app::AppContextSwitches__Class**)(modloader::win::memory::resolve_rva(0x04784528));
    }
    namespace LightCanvas_LightCanvasGuidManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LightCanvas_LightCanvasGuidManager__Class** type_info = (::app::LightCanvas_LightCanvasGuidManager__Class**)(modloader::win::memory::resolve_rva(0x04784A08));
    }
    namespace CaptureAgentUtils {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CaptureAgentUtils__Class** type_info = (::app::CaptureAgentUtils__Class**)(modloader::win::memory::resolve_rva(0x0475CDF0));
    }
    namespace Items {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Items__Class** type_info = (::app::Items__Class**)(modloader::win::memory::resolve_rva(0x0475CB78));
    }
    namespace UberShaderRenderQueue {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberShaderRenderQueue__Class** type_info = (::app::UberShaderRenderQueue__Class**)(modloader::win::memory::resolve_rva(0x04770138));
    }
    namespace UnityTls {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UnityTls__Class** type_info = (::app::UnityTls__Class**)(modloader::win::memory::resolve_rva(0x047050D0));
    }
    namespace CertificateValidationHelper {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CertificateValidationHelper__Class** type_info = (::app::CertificateValidationHelper__Class**)(modloader::win::memory::resolve_rva(0x04718390));
    }
    namespace SystemCertificateValidator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SystemCertificateValidator__Class** type_info = (::app::SystemCertificateValidator__Class**)(modloader::win::memory::resolve_rva(0x047089B8));
    }
    namespace MonoTlsProviderFactory {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MonoTlsProviderFactory__Class** type_info = (::app::MonoTlsProviderFactory__Class**)(modloader::win::memory::resolve_rva(0x04724FF8));
    }
    namespace ChallengeResponse2 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ChallengeResponse2__Class** type_info = (::app::ChallengeResponse2__Class**)(modloader::win::memory::resolve_rva(0x0471BCD0));
    }
    namespace ShaderID_ChannelClamper {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_ChannelClamper__Class** type_info = (::app::ShaderID_ChannelClamper__Class**)(modloader::win::memory::resolve_rva(0x0472C4E8));
    }
    namespace ShaderID_ChannelMixer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_ChannelMixer__Class** type_info = (::app::ShaderID_ChannelMixer__Class**)(modloader::win::memory::resolve_rva(0x04792D70));
    }
    namespace ShaderID_ChannelSwapper {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_ChannelSwapper__Class** type_info = (::app::ShaderID_ChannelSwapper__Class**)(modloader::win::memory::resolve_rva(0x0475F1B0));
    }
    namespace CharUnicodeInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CharUnicodeInfo__Class** type_info = (::app::CharUnicodeInfo__Class**)(modloader::win::memory::resolve_rva(0x04756870));
    }
    namespace ShaderID_CharacterAnimationSimple {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CharacterAnimationSimple__Class** type_info = (::app::ShaderID_CharacterAnimationSimple__Class**)(modloader::win::memory::resolve_rva(0x0473F480));
    }
    namespace ShaderID_CharacterAnimationThirdPerson {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CharacterAnimationThirdPerson__Class** type_info = (::app::ShaderID_CharacterAnimationThirdPerson__Class**)(modloader::win::memory::resolve_rva(0x047222E8));
    }
    namespace CharacterInteractables {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CharacterInteractables__Class** type_info = (::app::CharacterInteractables__Class**)(modloader::win::memory::resolve_rva(0x047219D0));
    }
    namespace PortalVistor {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PortalVistor__Class** type_info = (::app::PortalVistor__Class**)(modloader::win::memory::resolve_rva(0x047314C8));
    }
    namespace Music {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Music__Class** type_info = (::app::Music__Class**)(modloader::win::memory::resolve_rva(0x04764C10));
    }
    namespace ShaderID_ChromaticAberration {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_ChromaticAberration__Class** type_info = (::app::ShaderID_ChromaticAberration__Class**)(modloader::win::memory::resolve_rva(0x04756490));
    }
    namespace UberGCManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberGCManager__Class** type_info = (::app::UberGCManager__Class**)(modloader::win::memory::resolve_rva(0x0476B2D0));
    }
    namespace UberGCManager_GcCleanupReason__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberGCManager_GcCleanupReason__Enum__Class** type_info = (::app::UberGCManager_GcCleanupReason__Enum__Class**)(modloader::win::memory::resolve_rva(0x04712580));
    }
    namespace ClientInformation {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ClientInformation__Class** type_info = (::app::ClientInformation__Class**)(modloader::win::memory::resolve_rva(0x04712568));
    }
    namespace CodeIdentifier {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CodeIdentifier__Class** type_info = (::app::CodeIdentifier__Class**)(modloader::win::memory::resolve_rva(0x04701358));
    }
    namespace EncodingTable {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EncodingTable__Class** type_info = (::app::EncodingTable__Class**)(modloader::win::memory::resolve_rva(0x04767B80));
    }
    namespace SeinEvents {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SeinEvents__Class** type_info = (::app::SeinEvents__Class**)(modloader::win::memory::resolve_rva(0x047548F8));
    }
    namespace Physics2D {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Physics2D__Class** type_info = (::app::Physics2D__Class**)(modloader::win::memory::resolve_rva(0x04775FA8));
    }
    namespace ShaderID_ColorCorrectionCurves {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_ColorCorrectionCurves__Class** type_info = (::app::ShaderID_ColorCorrectionCurves__Class**)(modloader::win::memory::resolve_rva(0x04741290));
    }
    namespace ShaderID_ColorCorrectionLookup {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_ColorCorrectionLookup__Class** type_info = (::app::ShaderID_ColorCorrectionLookup__Class**)(modloader::win::memory::resolve_rva(0x04714C60));
    }
    namespace ShaderID_ColorCorrectionEffect {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_ColorCorrectionEffect__Class** type_info = (::app::ShaderID_ColorCorrectionEffect__Class**)(modloader::win::memory::resolve_rva(0x0477B9C8));
    }
    namespace ShaderID_ComicBook {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_ComicBook__Class** type_info = (::app::ShaderID_ComicBook__Class**)(modloader::win::memory::resolve_rva(0x04778AD8));
    }
    namespace CompModSwitches {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CompModSwitches__Class** type_info = (::app::CompModSwitches__Class**)(modloader::win::memory::resolve_rva(0x04758B80));
    }
    namespace MSCompatUnicodeTable {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MSCompatUnicodeTable__Class** type_info = (::app::MSCompatUnicodeTable__Class**)(modloader::win::memory::resolve_rva(0x0475EE20));
    }
    namespace TailoringInfo__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TailoringInfo__Array__Class** type_info = (::app::TailoringInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x0473FF88));
    }
    namespace ConditionBasedBrainController_BranchingBoolEntries__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ConditionBasedBrainController_BranchingBoolEntries__Enum__Class** type_info = (::app::ConditionBasedBrainController_BranchingBoolEntries__Enum__Class**)(modloader::win::memory::resolve_rva(0x047743C8));
    }
    namespace UberStateConditionHelper {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberStateConditionHelper__Class** type_info = (::app::UberStateConditionHelper__Class**)(modloader::win::memory::resolve_rva(0x04721BE8));
    }
    namespace HashHelpers_1 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::HashHelpers_1__Class** type_info = (::app::HashHelpers_1__Class**)(modloader::win::memory::resolve_rva(0x04723550));
    }
    namespace SoapServices {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SoapServices__Class** type_info = (::app::SoapServices__Class**)(modloader::win::memory::resolve_rva(0x0474BF38));
    }
    namespace LifetimeServices {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LifetimeServices__Class** type_info = (::app::LifetimeServices__Class**)(modloader::win::memory::resolve_rva(0x0478FB98));
    }
    namespace Logging {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Logging__Class** type_info = (::app::Logging__Class**)(modloader::win::memory::resolve_rva(0x04734188));
    }
    namespace TimerThread {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TimerThread__Class** type_info = (::app::TimerThread__Class**)(modloader::win::memory::resolve_rva(0x04713918));
    }
    namespace MonoIO {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MonoIO__Class** type_info = (::app::MonoIO__Class**)(modloader::win::memory::resolve_rva(0x0476F4D8));
    }
} // namespace app::classes::types
