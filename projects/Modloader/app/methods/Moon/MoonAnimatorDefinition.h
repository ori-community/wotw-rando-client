#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::MoonAnimatorDefinition {
    IL2CPP_REGISTER_METHOD(0x0211B730, app::MoonAnimatorLayerDefinition__Array*, get_AdditionalLayers, (app::MoonAnimatorDefinition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0211B820, int32_t, get_AdditionalLayerCount, (app::MoonAnimatorDefinition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::GameObject*, get_Rig, (app::MoonAnimatorDefinition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Rig, (app::MoonAnimatorDefinition * this_ptr, app::GameObject* value))
    IL2CPP_REGISTER_METHOD(0x0211B8B0, app::MoonAnimatorLayerDefinition, GetAdditionalLayer_1, (app::MoonAnimatorDefinition * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x0211B980, app::MoonAnimatorLayerDefinition, GetAdditionalLayer_2, (app::MoonAnimatorDefinition * this_ptr, app::MoonAnimatorLayerName layer_name))
    IL2CPP_REGISTER_METHOD(0x0211BAD0, app::MoonAnimatorLayerDefinition, GetAdditionalLayer_3, (app::MoonAnimatorDefinition * this_ptr, app::String* display_name))
    IL2CPP_REGISTER_METHOD(0x0211BC70, int32_t, GetAdditionalLayerIndex, (app::MoonAnimatorDefinition * this_ptr, app::MoonAnimatorLayerName layer_name))
    IL2CPP_REGISTER_METHOD(0x0211BD60, void, SetAdditionalLayerIndex, (app::MoonAnimatorDefinition * this_ptr, app::MoonAnimatorLayerName layer_name, int32_t new_index))
    IL2CPP_REGISTER_METHOD(0x0211BFD0, app::MoonAnimatorLayerDefinition, CreateNewAdditionalLayer, (app::MoonAnimatorDefinition * this_ptr, app::String* display_name))
    IL2CPP_REGISTER_METHOD(0x0211C180, void, RemoveAdditionalLayer_1, (app::MoonAnimatorDefinition * this_ptr, app::MoonAnimatorLayerName layer_name))
    IL2CPP_REGISTER_METHOD(0x0211C2D0, void, RemoveAdditionalLayer_2, (app::MoonAnimatorDefinition * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x0211C400, void, UpdateAdditionalLayer, (app::MoonAnimatorDefinition * this_ptr, app::MoonAnimatorLayerDefinition layer))
    IL2CPP_REGISTER_METHOD(0x0211C510, void, ctor, (app::MoonAnimatorDefinition * this_ptr))
} // namespace app::classes::Moon::MoonAnimatorDefinition
