#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Microsoft::Applications::Events::DataModels::Receipts {
    IL2CPP_REGISTER_METHOD(0x002FA280, int64_t, get_originalTime, (app::Receipts * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_originalTime, (app::Receipts * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHOD(0x002FB930, int64_t, get_uploadTime, (app::Receipts * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_uploadTime, (app::Receipts * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHOD(0x002FD3B0, void, ctor_1, (app::Receipts * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_2, (app::Receipts * this_ptr, app::String* full_name, app::String* name))
} // namespace app::classes::Microsoft::Applications::Events::DataModels::Receipts
