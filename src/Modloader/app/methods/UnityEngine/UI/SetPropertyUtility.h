#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnimationTriggers.h>
#include <Modloader/app/structs/AspectRatioFitter_AspectMode__Enum.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/ColorBlock.h>
#include <Modloader/app/structs/ContentSizeFitter_FitMode__Enum.h>
#include <Modloader/app/structs/Graphic.h>
#include <Modloader/app/structs/Image_FillMethod__Enum.h>
#include <Modloader/app/structs/Image_Type__Enum.h>
#include <Modloader/app/structs/InputField_CharacterValidation__Enum.h>
#include <Modloader/app/structs/InputField_ContentType__Enum.h>
#include <Modloader/app/structs/InputField_InputType__Enum.h>
#include <Modloader/app/structs/InputField_LineType__Enum.h>
#include <Modloader/app/structs/InputField_OnChangeEvent.h>
#include <Modloader/app/structs/InputField_OnValidateInput.h>
#include <Modloader/app/structs/InputField_SubmitEvent.h>
#include <Modloader/app/structs/Int32Enum__Enum.h>
#include <Modloader/app/structs/Navigation.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RectTransform.h>
#include <Modloader/app/structs/Scrollbar_Direction__Enum.h>
#include <Modloader/app/structs/Selectable_Transition__Enum.h>
#include <Modloader/app/structs/Slider_Direction__Enum.h>
#include <Modloader/app/structs/Sprite.h>
#include <Modloader/app/structs/SpriteState.h>
#include <Modloader/app/structs/Text.h>
#include <Modloader/app/structs/TouchScreenKeyboardType__Enum.h>

namespace app::classes::UnityEngine::UI::SetPropertyUtility {
    IL2CPP_REGISTER_METHOD(0x02674F40, bool, SetColor, app::Color* current_value, app::Color new_value)
    IL2CPP_REGISTER_METHOD(0x0156AD70, bool, SetClass_1, app::Object** current_value, app::Object* new_value)
    IL2CPP_REGISTER_METHOD(
        0x0156AEA0,
        bool,
        SetStruct_1,
        app::AspectRatioFitter_AspectMode__Enum* current_value,
        app::AspectRatioFitter_AspectMode__Enum new_value
    )
    IL2CPP_REGISTER_METHOD(0x0156AF00, bool, SetStruct_2, float* current_value, float new_value)
    IL2CPP_REGISTER_METHOD(0x0156AEA0, bool, SetStruct_3, app::ContentSizeFitter_FitMode__Enum* current_value, app::ContentSizeFitter_FitMode__Enum new_value)
    IL2CPP_REGISTER_METHOD(0x0156AD70, bool, SetClass_2, app::Sprite** current_value, app::Sprite* new_value)
    IL2CPP_REGISTER_METHOD(0x0156AEA0, bool, SetStruct_4, app::Image_Type__Enum* current_value, app::Image_Type__Enum new_value)
    IL2CPP_REGISTER_METHOD(0x0156ADC0, bool, SetStruct_5, bool* current_value, bool new_value)
    IL2CPP_REGISTER_METHOD(0x0156AEA0, bool, SetStruct_6, app::Image_FillMethod__Enum* current_value, app::Image_FillMethod__Enum new_value)
    IL2CPP_REGISTER_METHOD(0x0156AEA0, bool, SetStruct_7, int32_t* current_value, int32_t new_value)
    IL2CPP_REGISTER_METHOD(0x0156AD70, bool, SetClass_3, app::Text** current_value, app::Text* new_value)
    IL2CPP_REGISTER_METHOD(0x0156AD70, bool, SetClass_4, app::Graphic** current_value, app::Graphic* new_value)
    IL2CPP_REGISTER_METHOD(0x0156AD70, bool, SetClass_5, app::InputField_SubmitEvent** current_value, app::InputField_SubmitEvent* new_value)
    IL2CPP_REGISTER_METHOD(0x0156AD70, bool, SetClass_6, app::InputField_OnChangeEvent** current_value, app::InputField_OnChangeEvent* new_value)
    IL2CPP_REGISTER_METHOD(0x0156AD70, bool, SetClass_7, app::InputField_OnValidateInput** current_value, app::InputField_OnValidateInput* new_value)
    IL2CPP_REGISTER_METHOD(0x0156AEA0, bool, SetStruct_8, app::InputField_ContentType__Enum* current_value, app::InputField_ContentType__Enum new_value)
    IL2CPP_REGISTER_METHOD(0x0156AEA0, bool, SetStruct_9, app::InputField_LineType__Enum* current_value, app::InputField_LineType__Enum new_value)
    IL2CPP_REGISTER_METHOD(0x0156AEA0, bool, SetStruct_10, app::InputField_InputType__Enum* current_value, app::InputField_InputType__Enum new_value)
    IL2CPP_REGISTER_METHOD(0x0156AEA0, bool, SetStruct_11, app::TouchScreenKeyboardType__Enum* current_value, app::TouchScreenKeyboardType__Enum new_value)
    IL2CPP_REGISTER_METHOD(
        0x0156AEA0,
        bool,
        SetStruct_12,
        app::InputField_CharacterValidation__Enum* current_value,
        app::InputField_CharacterValidation__Enum new_value
    )
    IL2CPP_REGISTER_METHOD(0x0156AE30, bool, SetStruct_13, char16_t* current_value, char16_t new_value)
    IL2CPP_REGISTER_METHOD(0x0156AD70, bool, SetClass_8, app::RectTransform** current_value, app::RectTransform* new_value)
    IL2CPP_REGISTER_METHOD(0x0156AEA0, bool, SetStruct_14, app::Scrollbar_Direction__Enum* current_value, app::Scrollbar_Direction__Enum new_value)
    IL2CPP_REGISTER_METHOD(0x0156B080, bool, SetStruct_15, app::Navigation* current_value, app::Navigation new_value)
    IL2CPP_REGISTER_METHOD(0x0156AEA0, bool, SetStruct_16, app::Selectable_Transition__Enum* current_value, app::Selectable_Transition__Enum new_value)
    IL2CPP_REGISTER_METHOD(0x0156AF70, bool, SetStruct_17, app::ColorBlock* current_value, app::ColorBlock new_value)
    IL2CPP_REGISTER_METHOD(0x0156B150, bool, SetStruct_18, app::SpriteState* current_value, app::SpriteState new_value)
    IL2CPP_REGISTER_METHOD(0x0156AD70, bool, SetClass_9, app::AnimationTriggers** current_value, app::AnimationTriggers* new_value)
    IL2CPP_REGISTER_METHOD(0x0156AEA0, bool, SetStruct_19, app::Slider_Direction__Enum* current_value, app::Slider_Direction__Enum new_value)
    IL2CPP_REGISTER_METHOD(0x0156AEA0, bool, SetStruct_20, app::Int32Enum__Enum* current_value, app::Int32Enum__Enum new_value)
} // namespace app::classes::UnityEngine::UI::SetPropertyUtility
