#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Data::IndexField {
    IL2CPP_REGISTER_METHOD(0x00151890, void, ctor, (app::IndexField__Boxed * this_ptr, app::DataColumn* column, bool is_descending))
    IL2CPP_REGISTER_METHOD(0x01E3F960, bool, op_Equality, (app::IndexField if1, app::IndexField if2))
    IL2CPP_REGISTER_METHOD(0x001D5B70, bool, Equals, (app::IndexField__Boxed * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x001D5B80, int32_t, GetHashCode, (app::IndexField__Boxed * this_ptr))
    inline bool operator==(app::IndexField if1, app::IndexField if2) {
        return op_Equality(if1, if2);
    }
} // namespace app::classes::System::Data::IndexField
