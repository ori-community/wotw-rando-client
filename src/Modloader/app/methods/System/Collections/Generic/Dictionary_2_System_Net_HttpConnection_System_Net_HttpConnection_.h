#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Net_HttpConnection_System_Net_HttpConnection_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollection_System_Net_HttpConnection_System_Net_HttpConnectio_.h>
#include <Modloader/app/structs/HttpConnection.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Net_HttpConnection_System_Net_HttpConnection_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_Net_HttpConnection_System_Net_HttpConnection_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02BAC140,
        void,
        set_Item,
        app::Dictionary_2_System_Net_HttpConnection_System_Net_HttpConnection_* this_ptr,
        app::HttpConnection* key,
        app::HttpConnection* value
    )
    IL2CPP_REGISTER_METHOD(0x02BD3EC0, bool, Remove, app::Dictionary_2_System_Net_HttpConnection_System_Net_HttpConnection_* this_ptr, app::HttpConnection* key)
    IL2CPP_REGISTER_METHOD(
        0x0283B2B0,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_Net_HttpConnection_System_Net_HttpConnection_*,
        get_Keys,
        app::Dictionary_2_System_Net_HttpConnection_System_Net_HttpConnection_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, app::Dictionary_2_System_Net_HttpConnection_System_Net_HttpConnection_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Net_HttpConnection_System_Net_HttpConnection_
