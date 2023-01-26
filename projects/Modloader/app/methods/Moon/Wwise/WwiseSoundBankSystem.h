#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WwiseSoundBankSystem.h>
#include <Modloader/app/structs/AkWwiseInitializationSettings.h>
#include <Modloader/app/structs/HashSet_1_System_String_.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::Wwise::WwiseSoundBankSystem {
    IL2CPP_REGISTER_METHOD(0x02716B80, void, Initialize, (app::WwiseSoundBankSystem * this_ptr, app::AkWwiseInitializationSettings* config))
    IL2CPP_REGISTER_METHOD(0x02716D40, void, LoadAll, (app::WwiseSoundBankSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02716EB0, void, Load, (app::WwiseSoundBankSystem * this_ptr, app::String* name, bool async, uint32_t bank_id))
    IL2CPP_REGISTER_METHOD(0x02716FF0, void, Unload, (app::WwiseSoundBankSystem * this_ptr, app::String* name, uint32_t bank_id))
    IL2CPP_REGISTER_METHOD(0x027170F0, void, LoadRequired, (app::WwiseSoundBankSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027171B0, void, UnloadAll, (app::WwiseSoundBankSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02717310, bool, BankIsGlobal, (app::WwiseSoundBankSystem * this_ptr, uint32_t bank_id))
    IL2CPP_REGISTER_METHOD(0x027173E0, app::HashSet_1_System_String_*, GetAll, (app::WwiseSoundBankSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::WwiseSoundBankSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose, (app::WwiseSoundBankSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::WwiseSoundBankSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
} // namespace app::classes::Moon::Wwise::WwiseSoundBankSystem
