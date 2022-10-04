#include <Il2CppModLoader/app/types/BrowserNative.h>
#include <Il2CppModLoader/app/types/BuilderInfo.h>
#include <Il2CppModLoader/app/types/ButtonIconUtility.h>
#include <Il2CppModLoader/app/types/CCDistanceMapGenerator.h>
#include <Il2CppModLoader/app/types/CCDistanceMapGenerator_Pixel__Array.h>
#include <Il2CppModLoader/app/types/CCStringBuilderUtility.h>
#include <Il2CppModLoader/app/types/CCText__Array.h>
#include <Il2CppModLoader/app/types/CFNetwork.h>
#include <Il2CppModLoader/app/types/CSteamAPIContext.h>
#include <Il2CppModLoader/app/types/CSteamGameServerAPIContext.h>
#include <Il2CppModLoader/app/types/CachedReflectionInfo.h>
#include <Il2CppModLoader/app/types/CameraFovOffsetMixer.h>
#include <Il2CppModLoader/app/types/Console.h>
#include <Il2CppModLoader/app/types/ConsoleDriver.h>
#include <Il2CppModLoader/app/types/DateTimeUtils.h>
#include <Il2CppModLoader/app/types/IBooleanUberState.h>
#include <Il2CppModLoader/app/types/IClipGroup.h>
#include <Il2CppModLoader/app/types/IIndeterminateLengthTimelineEntity.h>
#include <Il2CppModLoader/app/types/KeyMappings.h>
#include <Il2CppModLoader/app/types/PhysicsUtils.h>
#include <Il2CppModLoader/app/types/ShaderID_Bloom.h>
#include <Il2CppModLoader/app/types/ShaderID_BloomAndFlares.h>
#include <Il2CppModLoader/app/types/ShaderID_BloomOptimized.h>
#include <Il2CppModLoader/app/types/ShaderID_Bloom_1.h>
#include <Il2CppModLoader/app/types/ShaderID_BlurOptimized.h>
#include <Il2CppModLoader/app/types/ShaderID_BrightnessContrastGamma.h>
#include <Il2CppModLoader/app/types/ShaderID_CC_AnalogTV.h>
#include <Il2CppModLoader/app/types/ShaderID_CC_BleachBypass.h>
#include <Il2CppModLoader/app/types/ShaderID_CC_BrightnessContrastGamma.h>
#include <Il2CppModLoader/app/types/ShaderID_CC_ChannelMixer.h>
#include <Il2CppModLoader/app/types/ShaderID_CC_DoubleVision.h>
#include <Il2CppModLoader/app/types/ShaderID_CC_FastVignette.h>
#include <Il2CppModLoader/app/types/ShaderID_CC_Frost.h>
#include <Il2CppModLoader/app/types/ShaderID_CC_Grayscale.h>
#include <Il2CppModLoader/app/types/ShaderID_CC_HueSaturationValue.h>
#include <Il2CppModLoader/app/types/ShaderID_CC_Led.h>
#include <Il2CppModLoader/app/types/ShaderID_CC_Levels.h>
#include <Il2CppModLoader/app/types/ShaderID_CC_PhotoFilter.h>
#include <Il2CppModLoader/app/types/ShaderID_CC_Pixelate.h>
#include <Il2CppModLoader/app/types/ShaderID_CC_Posterize.h>
#include <Il2CppModLoader/app/types/ShaderID_CC_RadialBlur.h>
#include <Il2CppModLoader/app/types/ShaderID_CC_Threshold.h>
#include <Il2CppModLoader/app/types/ShaderID_CC_Vibrance.h>
#include <Il2CppModLoader/app/types/ShaderID_CageTextureMaker.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_AAA_Blood.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_AAA_BloodOnScreen.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_AAA_Blood_Hit.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_AAA_Blood_Plus.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_AAA_SuperComputer.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_AAA_SuperHexagon.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_AAA_WaterDrop.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Alien_Vision.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Antialiasing_FXAA.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Atmosphere_Rain.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Atmosphere_Rain_Pro.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Atmosphere_Snow_8bits.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Blend2Camera_Blend.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Blend2Camera_BlueScreen.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Blend2Camera_Color.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Blend2Camera_ColorBurn.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Blend2Camera_ColorDodge.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Blend2Camera_Darken.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Blend2Camera_DarkerColor.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Blend2Camera_Difference.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Blend2Camera_Divide.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Blend2Camera_Exclusion.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Blend2Camera_GreenScreen.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Blend2Camera_HardLight.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Blend2Camera_HardMix.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Blend2Camera_Hue.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Blend2Camera_Lighten.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Blend2Camera_LighterColor.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Blend2Camera_LinearBurn.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Blend2Camera_LinearDodge.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Blend2Camera_LinearLight.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Blend2Camera_Luminosity.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Blend2Camera_Multiply.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Blend2Camera_Overlay.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Blend2Camera_PhotoshopFilters.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Blend2Camera_PinLight.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Blend2Camera_Saturation.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Blend2Camera_Screen.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Blend2Camera_SoftLight.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Blend2Camera_SplitScreen.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Blend2Camera_Subtract.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Blend2Camera_VividLight.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Blizzard.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Blur_Bloom.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Blur_BlurHole.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Blur_Blurry.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Blur_DitherOffset.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Blur_Dithering2x2.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Blur_Focus.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Blur_GaussianBlur.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Blur_Movie.h>
#include <Il2CppModLoader/app/types/ShaderID_CameraFilterPack_Blur_Noise.h>
#include <Il2CppModLoader/app/types/Statics.h>
#include <Il2CppModLoader/app/types/TimelineHelper.h>
#include <Il2CppModLoader/app/types/TimelineSolver.h>
#include <Il2CppModLoader/app/types/TransformExtensions.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PhysicsUtils {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PhysicsUtils__Class** type_info = (::app::PhysicsUtils__Class**)(modloader::win::memory::resolve_rva(0x04793708));
    }
    namespace ShaderID_BloomAndFlares {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_BloomAndFlares__Class** type_info = (::app::ShaderID_BloomAndFlares__Class**)(modloader::win::memory::resolve_rva(0x04798FA8));
    }
    namespace ShaderID_BloomOptimized {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_BloomOptimized__Class** type_info = (::app::ShaderID_BloomOptimized__Class**)(modloader::win::memory::resolve_rva(0x0474D718));
    }
    namespace ShaderID_Bloom {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_Bloom__Class** type_info = (::app::ShaderID_Bloom__Class**)(modloader::win::memory::resolve_rva(0x04711720));
    }
    namespace ShaderID_Bloom_1 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_Bloom_1__Class** type_info = (::app::ShaderID_Bloom_1__Class**)(modloader::win::memory::resolve_rva(0x0470DC90));
    }
    namespace ShaderID_BlurOptimized {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_BlurOptimized__Class** type_info = (::app::ShaderID_BlurOptimized__Class**)(modloader::win::memory::resolve_rva(0x047665B8));
    }
    namespace IBooleanUberState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IBooleanUberState__Class** type_info = (::app::IBooleanUberState__Class**)(modloader::win::memory::resolve_rva(0x0477D5D8));
    }
    namespace Statics {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Statics__Class** type_info = (::app::Statics__Class**)(modloader::win::memory::resolve_rva(0x04758118));
    }
    namespace TransformExtensions {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TransformExtensions__Class** type_info = (::app::TransformExtensions__Class**)(modloader::win::memory::resolve_rva(0x04767B98));
    }
    namespace TimelineSolver {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TimelineSolver__Class** type_info = (::app::TimelineSolver__Class**)(modloader::win::memory::resolve_rva(0x047204B8));
    }
    namespace TimelineHelper {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TimelineHelper__Class** type_info = (::app::TimelineHelper__Class**)(modloader::win::memory::resolve_rva(0x0475CE50));
    }
    namespace IIndeterminateLengthTimelineEntity {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IIndeterminateLengthTimelineEntity__Class** type_info = (::app::IIndeterminateLengthTimelineEntity__Class**)(modloader::win::memory::resolve_rva(0x0471CB38));
    }
    namespace IClipGroup {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IClipGroup__Class** type_info = (::app::IClipGroup__Class**)(modloader::win::memory::resolve_rva(0x04738FC8));
    }
    namespace ShaderID_BrightnessContrastGamma {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_BrightnessContrastGamma__Class** type_info = (::app::ShaderID_BrightnessContrastGamma__Class**)(modloader::win::memory::resolve_rva(0x04739790));
    }
    namespace BrowserNative {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BrowserNative__Class** type_info = (::app::BrowserNative__Class**)(modloader::win::memory::resolve_rva(0x0474FB30));
    }
    namespace KeyMappings {
        IL2CPP_MODLOADER_DLLEXPORT ::app::KeyMappings__Class** type_info = (::app::KeyMappings__Class**)(modloader::win::memory::resolve_rva(0x0473C698));
    }
    namespace DateTimeUtils {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DateTimeUtils__Class** type_info = (::app::DateTimeUtils__Class**)(modloader::win::memory::resolve_rva(0x047259A8));
    }
    namespace BuilderInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BuilderInfo__Class** type_info = (::app::BuilderInfo__Class**)(modloader::win::memory::resolve_rva(0x04741450));
    }
    namespace ButtonIconUtility {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ButtonIconUtility__Class** type_info = (::app::ButtonIconUtility__Class**)(modloader::win::memory::resolve_rva(0x0475BC10));
    }
    namespace CCDistanceMapGenerator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CCDistanceMapGenerator__Class** type_info = (::app::CCDistanceMapGenerator__Class**)(modloader::win::memory::resolve_rva(0x0477FD38));
    }
    namespace CCDistanceMapGenerator_Pixel__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CCDistanceMapGenerator_Pixel__Array__Class** type_info = (::app::CCDistanceMapGenerator_Pixel__Array__Class**)(modloader::win::memory::resolve_rva(0x0477BD60));
    }
    namespace CCText__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CCText__Array__Class** type_info = (::app::CCText__Array__Class**)(modloader::win::memory::resolve_rva(0x04739A10));
    }
    namespace CCStringBuilderUtility {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CCStringBuilderUtility__Class** type_info = (::app::CCStringBuilderUtility__Class**)(modloader::win::memory::resolve_rva(0x0472DE58));
    }
    namespace ShaderID_CC_AnalogTV {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CC_AnalogTV__Class** type_info = (::app::ShaderID_CC_AnalogTV__Class**)(modloader::win::memory::resolve_rva(0x04757100));
    }
    namespace ShaderID_CC_BleachBypass {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CC_BleachBypass__Class** type_info = (::app::ShaderID_CC_BleachBypass__Class**)(modloader::win::memory::resolve_rva(0x0473C378));
    }
    namespace ShaderID_CC_BrightnessContrastGamma {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CC_BrightnessContrastGamma__Class** type_info = (::app::ShaderID_CC_BrightnessContrastGamma__Class**)(modloader::win::memory::resolve_rva(0x04789C98));
    }
    namespace ShaderID_CC_ChannelMixer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CC_ChannelMixer__Class** type_info = (::app::ShaderID_CC_ChannelMixer__Class**)(modloader::win::memory::resolve_rva(0x04730B08));
    }
    namespace ShaderID_CC_DoubleVision {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CC_DoubleVision__Class** type_info = (::app::ShaderID_CC_DoubleVision__Class**)(modloader::win::memory::resolve_rva(0x04730F00));
    }
    namespace ShaderID_CC_FastVignette {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CC_FastVignette__Class** type_info = (::app::ShaderID_CC_FastVignette__Class**)(modloader::win::memory::resolve_rva(0x04778BC8));
    }
    namespace ShaderID_CC_Frost {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CC_Frost__Class** type_info = (::app::ShaderID_CC_Frost__Class**)(modloader::win::memory::resolve_rva(0x0475A8D8));
    }
    namespace ShaderID_CC_Grayscale {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CC_Grayscale__Class** type_info = (::app::ShaderID_CC_Grayscale__Class**)(modloader::win::memory::resolve_rva(0x047756A0));
    }
    namespace ShaderID_CC_HueSaturationValue {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CC_HueSaturationValue__Class** type_info = (::app::ShaderID_CC_HueSaturationValue__Class**)(modloader::win::memory::resolve_rva(0x0472CD08));
    }
    namespace ShaderID_CC_Led {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CC_Led__Class** type_info = (::app::ShaderID_CC_Led__Class**)(modloader::win::memory::resolve_rva(0x047449B8));
    }
    namespace ShaderID_CC_Levels {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CC_Levels__Class** type_info = (::app::ShaderID_CC_Levels__Class**)(modloader::win::memory::resolve_rva(0x0477F8A0));
    }
    namespace ShaderID_CC_PhotoFilter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CC_PhotoFilter__Class** type_info = (::app::ShaderID_CC_PhotoFilter__Class**)(modloader::win::memory::resolve_rva(0x04726790));
    }
    namespace ShaderID_CC_Pixelate {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CC_Pixelate__Class** type_info = (::app::ShaderID_CC_Pixelate__Class**)(modloader::win::memory::resolve_rva(0x0476C6B0));
    }
    namespace ShaderID_CC_Posterize {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CC_Posterize__Class** type_info = (::app::ShaderID_CC_Posterize__Class**)(modloader::win::memory::resolve_rva(0x0473A7F8));
    }
    namespace ShaderID_CC_RadialBlur {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CC_RadialBlur__Class** type_info = (::app::ShaderID_CC_RadialBlur__Class**)(modloader::win::memory::resolve_rva(0x0478F3E8));
    }
    namespace ShaderID_CC_Threshold {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CC_Threshold__Class** type_info = (::app::ShaderID_CC_Threshold__Class**)(modloader::win::memory::resolve_rva(0x04797128));
    }
    namespace ShaderID_CC_Vibrance {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CC_Vibrance__Class** type_info = (::app::ShaderID_CC_Vibrance__Class**)(modloader::win::memory::resolve_rva(0x0471F8C8));
    }
    namespace CFNetwork {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CFNetwork__Class** type_info = (::app::CFNetwork__Class**)(modloader::win::memory::resolve_rva(0x047454D8));
    }
    namespace CSteamAPIContext {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CSteamAPIContext__Class** type_info = (::app::CSteamAPIContext__Class**)(modloader::win::memory::resolve_rva(0x0476BC40));
    }
    namespace CSteamGameServerAPIContext {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CSteamGameServerAPIContext__Class** type_info = (::app::CSteamGameServerAPIContext__Class**)(modloader::win::memory::resolve_rva(0x0478CA70));
    }
    namespace Console {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Console__Class** type_info = (::app::Console__Class**)(modloader::win::memory::resolve_rva(0x04747638));
    }
    namespace ConsoleDriver {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ConsoleDriver__Class** type_info = (::app::ConsoleDriver__Class**)(modloader::win::memory::resolve_rva(0x04756000));
    }
    namespace CachedReflectionInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CachedReflectionInfo__Class** type_info = (::app::CachedReflectionInfo__Class**)(modloader::win::memory::resolve_rva(0x0477BD10));
    }
    namespace ShaderID_CageTextureMaker {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CageTextureMaker__Class** type_info = (::app::ShaderID_CageTextureMaker__Class**)(modloader::win::memory::resolve_rva(0x0470AD78));
    }
    namespace CameraFovOffsetMixer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CameraFovOffsetMixer__Class** type_info = (::app::CameraFovOffsetMixer__Class**)(modloader::win::memory::resolve_rva(0x04757060));
    }
    namespace ShaderID_CameraFilterPack_AAA_BloodOnScreen {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_AAA_BloodOnScreen__Class** type_info = (::app::ShaderID_CameraFilterPack_AAA_BloodOnScreen__Class**)(modloader::win::memory::resolve_rva(0x047734A0));
    }
    namespace ShaderID_CameraFilterPack_AAA_Blood_Hit {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_AAA_Blood_Hit__Class** type_info = (::app::ShaderID_CameraFilterPack_AAA_Blood_Hit__Class**)(modloader::win::memory::resolve_rva(0x0477CD38));
    }
    namespace ShaderID_CameraFilterPack_AAA_Blood {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_AAA_Blood__Class** type_info = (::app::ShaderID_CameraFilterPack_AAA_Blood__Class**)(modloader::win::memory::resolve_rva(0x04744E10));
    }
    namespace ShaderID_CameraFilterPack_AAA_Blood_Plus {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_AAA_Blood_Plus__Class** type_info = (::app::ShaderID_CameraFilterPack_AAA_Blood_Plus__Class**)(modloader::win::memory::resolve_rva(0x047541F8));
    }
    namespace ShaderID_CameraFilterPack_AAA_SuperComputer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_AAA_SuperComputer__Class** type_info = (::app::ShaderID_CameraFilterPack_AAA_SuperComputer__Class**)(modloader::win::memory::resolve_rva(0x0474CFD8));
    }
    namespace ShaderID_CameraFilterPack_AAA_SuperHexagon {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_AAA_SuperHexagon__Class** type_info = (::app::ShaderID_CameraFilterPack_AAA_SuperHexagon__Class**)(modloader::win::memory::resolve_rva(0x04714720));
    }
    namespace ShaderID_CameraFilterPack_AAA_WaterDrop {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_AAA_WaterDrop__Class** type_info = (::app::ShaderID_CameraFilterPack_AAA_WaterDrop__Class**)(modloader::win::memory::resolve_rva(0x04731B30));
    }
    namespace ShaderID_CameraFilterPack_Alien_Vision {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Alien_Vision__Class** type_info = (::app::ShaderID_CameraFilterPack_Alien_Vision__Class**)(modloader::win::memory::resolve_rva(0x0470D9C8));
    }
    namespace ShaderID_CameraFilterPack_Antialiasing_FXAA {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Antialiasing_FXAA__Class** type_info = (::app::ShaderID_CameraFilterPack_Antialiasing_FXAA__Class**)(modloader::win::memory::resolve_rva(0x04727430));
    }
    namespace ShaderID_CameraFilterPack_Atmosphere_Rain {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Atmosphere_Rain__Class** type_info = (::app::ShaderID_CameraFilterPack_Atmosphere_Rain__Class**)(modloader::win::memory::resolve_rva(0x04788488));
    }
    namespace ShaderID_CameraFilterPack_Atmosphere_Rain_Pro {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Atmosphere_Rain_Pro__Class** type_info = (::app::ShaderID_CameraFilterPack_Atmosphere_Rain_Pro__Class**)(modloader::win::memory::resolve_rva(0x0474FE60));
    }
    namespace ShaderID_CameraFilterPack_Atmosphere_Snow_8bits {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Atmosphere_Snow_8bits__Class** type_info = (::app::ShaderID_CameraFilterPack_Atmosphere_Snow_8bits__Class**)(modloader::win::memory::resolve_rva(0x0477CA78));
    }
    namespace ShaderID_CameraFilterPack_Blend2Camera_Blend {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Blend2Camera_Blend__Class** type_info = (::app::ShaderID_CameraFilterPack_Blend2Camera_Blend__Class**)(modloader::win::memory::resolve_rva(0x047166E0));
    }
    namespace ShaderID_CameraFilterPack_Blend2Camera_BlueScreen {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Blend2Camera_BlueScreen__Class** type_info = (::app::ShaderID_CameraFilterPack_Blend2Camera_BlueScreen__Class**)(modloader::win::memory::resolve_rva(0x047463C8));
    }
    namespace ShaderID_CameraFilterPack_Blend2Camera_ColorBurn {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Blend2Camera_ColorBurn__Class** type_info = (::app::ShaderID_CameraFilterPack_Blend2Camera_ColorBurn__Class**)(modloader::win::memory::resolve_rva(0x0478D730));
    }
    namespace ShaderID_CameraFilterPack_Blend2Camera_ColorDodge {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Blend2Camera_ColorDodge__Class** type_info = (::app::ShaderID_CameraFilterPack_Blend2Camera_ColorDodge__Class**)(modloader::win::memory::resolve_rva(0x04770660));
    }
    namespace ShaderID_CameraFilterPack_Blend2Camera_Color {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Blend2Camera_Color__Class** type_info = (::app::ShaderID_CameraFilterPack_Blend2Camera_Color__Class**)(modloader::win::memory::resolve_rva(0x047267E0));
    }
    namespace ShaderID_CameraFilterPack_Blend2Camera_Darken {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Blend2Camera_Darken__Class** type_info = (::app::ShaderID_CameraFilterPack_Blend2Camera_Darken__Class**)(modloader::win::memory::resolve_rva(0x0470F380));
    }
    namespace ShaderID_CameraFilterPack_Blend2Camera_DarkerColor {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Blend2Camera_DarkerColor__Class** type_info = (::app::ShaderID_CameraFilterPack_Blend2Camera_DarkerColor__Class**)(modloader::win::memory::resolve_rva(0x0470A760));
    }
    namespace ShaderID_CameraFilterPack_Blend2Camera_Difference {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Blend2Camera_Difference__Class** type_info = (::app::ShaderID_CameraFilterPack_Blend2Camera_Difference__Class**)(modloader::win::memory::resolve_rva(0x04751018));
    }
    namespace ShaderID_CameraFilterPack_Blend2Camera_Divide {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Blend2Camera_Divide__Class** type_info = (::app::ShaderID_CameraFilterPack_Blend2Camera_Divide__Class**)(modloader::win::memory::resolve_rva(0x04718810));
    }
    namespace ShaderID_CameraFilterPack_Blend2Camera_Exclusion {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Blend2Camera_Exclusion__Class** type_info = (::app::ShaderID_CameraFilterPack_Blend2Camera_Exclusion__Class**)(modloader::win::memory::resolve_rva(0x04725310));
    }
    namespace ShaderID_CameraFilterPack_Blend2Camera_GreenScreen {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Blend2Camera_GreenScreen__Class** type_info = (::app::ShaderID_CameraFilterPack_Blend2Camera_GreenScreen__Class**)(modloader::win::memory::resolve_rva(0x0478DE60));
    }
    namespace ShaderID_CameraFilterPack_Blend2Camera_HardLight {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Blend2Camera_HardLight__Class** type_info = (::app::ShaderID_CameraFilterPack_Blend2Camera_HardLight__Class**)(modloader::win::memory::resolve_rva(0x04710DD0));
    }
    namespace ShaderID_CameraFilterPack_Blend2Camera_HardMix {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Blend2Camera_HardMix__Class** type_info = (::app::ShaderID_CameraFilterPack_Blend2Camera_HardMix__Class**)(modloader::win::memory::resolve_rva(0x047009C8));
    }
    namespace ShaderID_CameraFilterPack_Blend2Camera_Hue {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Blend2Camera_Hue__Class** type_info = (::app::ShaderID_CameraFilterPack_Blend2Camera_Hue__Class**)(modloader::win::memory::resolve_rva(0x0478C620));
    }
    namespace ShaderID_CameraFilterPack_Blend2Camera_Lighten {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Blend2Camera_Lighten__Class** type_info = (::app::ShaderID_CameraFilterPack_Blend2Camera_Lighten__Class**)(modloader::win::memory::resolve_rva(0x0477A568));
    }
    namespace ShaderID_CameraFilterPack_Blend2Camera_LighterColor {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Blend2Camera_LighterColor__Class** type_info = (::app::ShaderID_CameraFilterPack_Blend2Camera_LighterColor__Class**)(modloader::win::memory::resolve_rva(0x0474F120));
    }
    namespace ShaderID_CameraFilterPack_Blend2Camera_LinearBurn {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Blend2Camera_LinearBurn__Class** type_info = (::app::ShaderID_CameraFilterPack_Blend2Camera_LinearBurn__Class**)(modloader::win::memory::resolve_rva(0x04736FF8));
    }
    namespace ShaderID_CameraFilterPack_Blend2Camera_LinearDodge {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Blend2Camera_LinearDodge__Class** type_info = (::app::ShaderID_CameraFilterPack_Blend2Camera_LinearDodge__Class**)(modloader::win::memory::resolve_rva(0x0473CBB8));
    }
    namespace ShaderID_CameraFilterPack_Blend2Camera_LinearLight {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Blend2Camera_LinearLight__Class** type_info = (::app::ShaderID_CameraFilterPack_Blend2Camera_LinearLight__Class**)(modloader::win::memory::resolve_rva(0x04797FC8));
    }
    namespace ShaderID_CameraFilterPack_Blend2Camera_Luminosity {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Blend2Camera_Luminosity__Class** type_info = (::app::ShaderID_CameraFilterPack_Blend2Camera_Luminosity__Class**)(modloader::win::memory::resolve_rva(0x04753870));
    }
    namespace ShaderID_CameraFilterPack_Blend2Camera_Multiply {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Blend2Camera_Multiply__Class** type_info = (::app::ShaderID_CameraFilterPack_Blend2Camera_Multiply__Class**)(modloader::win::memory::resolve_rva(0x047344E8));
    }
    namespace ShaderID_CameraFilterPack_Blend2Camera_Overlay {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Blend2Camera_Overlay__Class** type_info = (::app::ShaderID_CameraFilterPack_Blend2Camera_Overlay__Class**)(modloader::win::memory::resolve_rva(0x047821C0));
    }
    namespace ShaderID_CameraFilterPack_Blend2Camera_PhotoshopFilters {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Blend2Camera_PhotoshopFilters__Class** type_info = (::app::ShaderID_CameraFilterPack_Blend2Camera_PhotoshopFilters__Class**)(modloader::win::memory::resolve_rva(0x047282C8));
    }
    namespace ShaderID_CameraFilterPack_Blend2Camera_PinLight {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Blend2Camera_PinLight__Class** type_info = (::app::ShaderID_CameraFilterPack_Blend2Camera_PinLight__Class**)(modloader::win::memory::resolve_rva(0x0472BFE8));
    }
    namespace ShaderID_CameraFilterPack_Blend2Camera_Saturation {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Blend2Camera_Saturation__Class** type_info = (::app::ShaderID_CameraFilterPack_Blend2Camera_Saturation__Class**)(modloader::win::memory::resolve_rva(0x0471CC58));
    }
    namespace ShaderID_CameraFilterPack_Blend2Camera_Screen {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Blend2Camera_Screen__Class** type_info = (::app::ShaderID_CameraFilterPack_Blend2Camera_Screen__Class**)(modloader::win::memory::resolve_rva(0x047871B8));
    }
    namespace ShaderID_CameraFilterPack_Blend2Camera_SoftLight {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Blend2Camera_SoftLight__Class** type_info = (::app::ShaderID_CameraFilterPack_Blend2Camera_SoftLight__Class**)(modloader::win::memory::resolve_rva(0x04746738));
    }
    namespace ShaderID_CameraFilterPack_Blend2Camera_SplitScreen {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Blend2Camera_SplitScreen__Class** type_info = (::app::ShaderID_CameraFilterPack_Blend2Camera_SplitScreen__Class**)(modloader::win::memory::resolve_rva(0x047387A8));
    }
    namespace ShaderID_CameraFilterPack_Blend2Camera_Subtract {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Blend2Camera_Subtract__Class** type_info = (::app::ShaderID_CameraFilterPack_Blend2Camera_Subtract__Class**)(modloader::win::memory::resolve_rva(0x04760E40));
    }
    namespace ShaderID_CameraFilterPack_Blend2Camera_VividLight {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Blend2Camera_VividLight__Class** type_info = (::app::ShaderID_CameraFilterPack_Blend2Camera_VividLight__Class**)(modloader::win::memory::resolve_rva(0x04705608));
    }
    namespace ShaderID_CameraFilterPack_Blizzard {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Blizzard__Class** type_info = (::app::ShaderID_CameraFilterPack_Blizzard__Class**)(modloader::win::memory::resolve_rva(0x04713718));
    }
    namespace ShaderID_CameraFilterPack_Blur_Bloom {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Blur_Bloom__Class** type_info = (::app::ShaderID_CameraFilterPack_Blur_Bloom__Class**)(modloader::win::memory::resolve_rva(0x04705720));
    }
    namespace ShaderID_CameraFilterPack_Blur_BlurHole {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Blur_BlurHole__Class** type_info = (::app::ShaderID_CameraFilterPack_Blur_BlurHole__Class**)(modloader::win::memory::resolve_rva(0x04727718));
    }
    namespace ShaderID_CameraFilterPack_Blur_Blurry {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Blur_Blurry__Class** type_info = (::app::ShaderID_CameraFilterPack_Blur_Blurry__Class**)(modloader::win::memory::resolve_rva(0x04742568));
    }
    namespace ShaderID_CameraFilterPack_Blur_DitherOffset {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Blur_DitherOffset__Class** type_info = (::app::ShaderID_CameraFilterPack_Blur_DitherOffset__Class**)(modloader::win::memory::resolve_rva(0x04798A98));
    }
    namespace ShaderID_CameraFilterPack_Blur_Dithering2x2 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Blur_Dithering2x2__Class** type_info = (::app::ShaderID_CameraFilterPack_Blur_Dithering2x2__Class**)(modloader::win::memory::resolve_rva(0x04719030));
    }
    namespace ShaderID_CameraFilterPack_Blur_Focus {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Blur_Focus__Class** type_info = (::app::ShaderID_CameraFilterPack_Blur_Focus__Class**)(modloader::win::memory::resolve_rva(0x0475A4C0));
    }
    namespace ShaderID_CameraFilterPack_Blur_GaussianBlur {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Blur_GaussianBlur__Class** type_info = (::app::ShaderID_CameraFilterPack_Blur_GaussianBlur__Class**)(modloader::win::memory::resolve_rva(0x04789968));
    }
    namespace ShaderID_CameraFilterPack_Blur_Movie {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Blur_Movie__Class** type_info = (::app::ShaderID_CameraFilterPack_Blur_Movie__Class**)(modloader::win::memory::resolve_rva(0x04753310));
    }
    namespace ShaderID_CameraFilterPack_Blur_Noise {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShaderID_CameraFilterPack_Blur_Noise__Class** type_info = (::app::ShaderID_CameraFilterPack_Blur_Noise__Class**)(modloader::win::memory::resolve_rva(0x04734470));
    }
} // namespace app::classes::types
