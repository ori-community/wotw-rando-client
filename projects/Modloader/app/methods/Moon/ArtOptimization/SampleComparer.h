#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Color32.h>
#include <Modloader/app/structs/ComputeShader.h>
#include <Modloader/app/structs/SampleComparer.h>
#include <Modloader/app/structs/Texture.h>
#include <Modloader/app/structs/TexturePoolEntity.h>

namespace app::classes::Moon::ArtOptimization::SampleComparer {
    IL2CPP_REGISTER_METHOD(0x013500B0, app::ComputeShader*, GetImageCompareShader, app::SampleComparer* this_ptr, int32_t width, int32_t height)
    IL2CPP_REGISTER_METHOD(0x01350650, void, ctor_1, app::SampleComparer* this_ptr, app::TexturePoolEntity* master, app::TexturePoolEntity* sample)
    IL2CPP_REGISTER_METHOD(0x01350A80, void, ctor_2, app::SampleComparer* this_ptr, app::TexturePoolEntity* master, app::Texture* sample)
    IL2CPP_REGISTER_METHOD(0x01350FE0, float, CalculateEnergy, app::SampleComparer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01351120, bool, IsColors32Equal, app::SampleComparer* this_ptr, app::Color32 color1, app::Color32 color2)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Clear, app::SampleComparer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, )
} // namespace app::classes::Moon::ArtOptimization::SampleComparer
