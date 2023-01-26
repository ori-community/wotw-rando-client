#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KamikazeJumperGroupAgro.h>
#include <Modloader/app/structs/IMoonTypeResolver.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::KamikazeJumperGroupAgro {
    IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_IsAgro, (app::KamikazeJumperGroupAgro * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E5A380, void, Start, (app::KamikazeJumperGroupAgro * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E5A410, void, Initiate, (app::KamikazeJumperGroupAgro * this_ptr, app::String* id))
    IL2CPP_REGISTER_METHOD(0x00E5A590, void, AddGroupMember, (app::KamikazeJumperGroupAgro * kamikaze_jumper_group_agro))
    IL2CPP_REGISTER_METHOD(0x00E5A680, void, RemoveGroupMember, (app::KamikazeJumperGroupAgro * kamikaze_jumper_group_agro))
    IL2CPP_REGISTER_METHOD(0x00E5A740, void, SetAllToAgro, (app::String * group_i_d))
    IL2CPP_REGISTER_METHOD(0x00E5A960, void, OnDestroy, (app::KamikazeJumperGroupAgro * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E5AAB0, void, Update, (app::KamikazeJumperGroupAgro * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00617EB0, void, SetAgroTrue, (app::KamikazeJumperGroupAgro * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E5ABE0, void, ctor, (app::KamikazeJumperGroupAgro * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E5AC70, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_1, (app::KamikazeJumperGroupAgro * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_2, (app::KamikazeJumperGroupAgro * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_3, (app::KamikazeJumperGroupAgro * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_4, (app::KamikazeJumperGroupAgro * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_5, (app::KamikazeJumperGroupAgro * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_6, (app::KamikazeJumperGroupAgro * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_7, (app::KamikazeJumperGroupAgro * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_8, (app::KamikazeJumperGroupAgro * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_9, (app::KamikazeJumperGroupAgro * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_10, (app::KamikazeJumperGroupAgro * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_11, (app::KamikazeJumperGroupAgro * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_12, (app::KamikazeJumperGroupAgro * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_13, (app::KamikazeJumperGroupAgro * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_14, (app::KamikazeJumperGroupAgro * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_15, (app::KamikazeJumperGroupAgro * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_16, (app::KamikazeJumperGroupAgro * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_17, (app::KamikazeJumperGroupAgro * this_ptr))
} // namespace app::classes::KamikazeJumperGroupAgro
