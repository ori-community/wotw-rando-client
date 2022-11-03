#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::ArtOptimization::ArtOptimizationDataModel {
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::TexturesPool*, get_Pool, (app::ArtOptimizationDataModel * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::String*, get_SceneGuid, (app::ArtOptimizationDataModel * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_SceneGuid, (app::ArtOptimizationDataModel * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x01340020, void, ctor, (app::ArtOptimizationDataModel * this_ptr, app::String* scene_guid))
    IL2CPP_REGISTER_METHOD(0x01340430, void, Clear, (app::ArtOptimizationDataModel * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013404E0, void, InitTexturesPool, (app::ArtOptimizationDataModel * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01340770, void, DumpPool, (app::ArtOptimizationDataModel * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01340790, app::SerializableUberShaderWrapper*, GetSerializableWrapper, (app::ArtOptimizationDataModel * this_ptr, app::UberShaderComponent* uber_shader))
    IL2CPP_REGISTER_METHOD(0x01340990, app::UberShaderWrapper*, GetOrCreateWrapper, (app::ArtOptimizationDataModel * this_ptr, app::UberShaderComponent* uber_shader))
    IL2CPP_REGISTER_METHOD(0x01340B90, void, Rebind, (app::ArtOptimizationDataModel * this_ptr, app::List_1_UberShaderComponent_* uber_shaders))
    IL2CPP_REGISTER_METHOD(0x01340E70, void, CleanUp, (app::ArtOptimizationDataModel * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::List_1_Moon_ArtOptimization_SerializableUberShaderWrapper_*, get_UberShaders, (app::ArtOptimizationDataModel * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Dictionary_2_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper_*, get_UberShadersMap, (app::ArtOptimizationDataModel * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013410B0, void, SaveReport, (app::ArtOptimizationDataModel * this_ptr))
} // namespace app::classes::Moon::ArtOptimization::ArtOptimizationDataModel
