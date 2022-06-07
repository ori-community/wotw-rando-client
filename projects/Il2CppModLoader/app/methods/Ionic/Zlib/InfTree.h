#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Ionic::Zlib::InfTree {
    IL2CPP_REGISTER_METHOD(0x0306E730, int32_t, huft_build, (app::InfTree * this_ptr, app::Int32__Array * b, int32_t bindex, int32_t n, int32_t s, app::Int32__Array * d, app::Int32__Array * e, app::Int32__Array * t, app::Int32__Array * m, app::Int32__Array * hp, app::Int32__Array * hn, app::Int32__Array * v))
    IL2CPP_REGISTER_METHOD(0x0306F440, int32_t, inflate_trees_bits, (app::InfTree * this_ptr, app::Int32__Array * c, app::Int32__Array * bb, app::Int32__Array * tb, app::Int32__Array * hp, app::ZlibCodec * z))
    IL2CPP_REGISTER_METHOD(0x0306F600, int32_t, inflate_trees_dynamic, (app::InfTree * this_ptr, int32_t nl, int32_t nd, app::Int32__Array * c, app::Int32__Array * bl, app::Int32__Array * bd, app::Int32__Array * tl, app::Int32__Array * td, app::Int32__Array * hp, app::ZlibCodec * z))
    IL2CPP_REGISTER_METHOD(0x0306F980, int32_t, inflate_trees_fixed, (app::Int32__Array * bl, app::Int32__Array * bd, app::Int32__Array__Array * tl, app::Int32__Array__Array * td, app::ZlibCodec * z))
    IL2CPP_REGISTER_METHOD(0x0306FB70, void, initWorkArea, (app::InfTree * this_ptr, int32_t vsize))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::InfTree * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0306FD90, void, cctor, ())
}
