#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BitSet.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Xml::Schema::BitSet {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::BitSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019A87C0, void, ctor_2, (app::BitSet * this_ptr, int32_t count))
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_Count, (app::BitSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019A8860, bool, get_Item, (app::BitSet * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x019A88C0, void, Clear, (app::BitSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019A8920, void, Set, (app::BitSet * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x019A8860, bool, Get, (app::BitSet * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x019A8990, int32_t, NextSet, (app::BitSet * this_ptr, int32_t start_from))
    IL2CPP_REGISTER_METHOD(0x019A8A60, void, And, (app::BitSet * this_ptr, app::BitSet* other))
    IL2CPP_REGISTER_METHOD(0x019A8B70, void, Or, (app::BitSet * this_ptr, app::BitSet* other))
    IL2CPP_REGISTER_METHOD(0x019A8C30, int32_t, GetHashCode, (app::BitSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019A8C80, bool, Equals, (app::BitSet * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x019A8EA0, app::BitSet*, Clone, (app::BitSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019A90C0, bool, get_IsEmpty, (app::BitSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019A9120, bool, Intersects, (app::BitSet * this_ptr, app::BitSet* other))
    IL2CPP_REGISTER_METHOD(0x019A9270, int32_t, Subscript, (app::BitSet * this_ptr, int32_t bit_index))
    IL2CPP_REGISTER_METHOD(0x019A9280, void, EnsureLength, (app::BitSet * this_ptr, int32_t n_required_length))
} // namespace app::classes::System::Xml::Schema::BitSet
