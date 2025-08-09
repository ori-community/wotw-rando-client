#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/KeyedHashAlgorithm.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Security::Cryptography::KeyedHashAlgorithm {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::KeyedHashAlgorithm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020DBF60, void, Dispose, app::KeyedHashAlgorithm* this_ptr, bool disposing)
    IL2CPP_REGISTER_METHOD(0x020DBFC0, app::Byte__Array*, get_Key, app::KeyedHashAlgorithm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020DC100, void, set_Key, app::KeyedHashAlgorithm* this_ptr, app::Byte__Array* value)
    IL2CPP_REGISTER_METHOD(0x020DC2A0, app::KeyedHashAlgorithm*, Create_1, )
    IL2CPP_REGISTER_METHOD(0x020DC3E0, app::KeyedHashAlgorithm*, Create_2, app::String* alg_name)
} // namespace app::classes::System::Security::Cryptography::KeyedHashAlgorithm
