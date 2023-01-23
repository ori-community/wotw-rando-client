#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/StaticTree.h>
#include <Modloader/app/structs/Int16__Array.h>
#include <Modloader/app/structs/Int32__Array.h>

namespace app::classes::Ionic::Zlib::StaticTree {
    IL2CPP_REGISTER_METHOD(0x030752E0, void, ctor, (app::StaticTree * this_ptr, app::Int16__Array* tree_codes, app::Int32__Array* extra_bits, int32_t extra_base, int32_t elems, int32_t max_length))
    IL2CPP_REGISTER_METHOD(0x03075300, void, cctor, ())
} // namespace app::classes::Ionic::Zlib::StaticTree
