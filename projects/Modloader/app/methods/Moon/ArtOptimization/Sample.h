#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TexturePoolEntity.h>
#include <Modloader/app/structs/Sample.h>
#include <Modloader/app/structs/Texture.h>

namespace app::classes::Moon::ArtOptimization::Sample {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::TexturePoolEntity*, get_MasterTex, (app::Sample * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_MasterTex, (app::Sample * this_ptr, app::TexturePoolEntity* value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::TexturePoolEntity*, get_SampleTex, (app::Sample * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_SampleTex, (app::Sample * this_ptr, app::TexturePoolEntity* value))
    IL2CPP_REGISTER_METHOD(0x00418FC0, float, get_Energy, (app::Sample * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A64050, void, set_Energy, (app::Sample * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::Sample * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0134FD70, void, ctor_2, (app::Sample * this_ptr, app::TexturePoolEntity* master, app::TexturePoolEntity* sample))
    IL2CPP_REGISTER_METHOD(0x0134FEF0, void, ctor_3, (app::Sample * this_ptr, app::TexturePoolEntity* master, app::Texture* sample))
    IL2CPP_REGISTER_METHOD(0x01350070, void, CleanUp, (app::Sample * this_ptr))
} // namespace app::classes::Moon::ArtOptimization::Sample
