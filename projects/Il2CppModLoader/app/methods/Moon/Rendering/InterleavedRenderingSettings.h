#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Rendering::InterleavedRenderingSettings {
    IL2CPP_REGISTER_METHOD(0x0078D270, void, ctor, (app::InterleavedRenderingSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0078D6F0, bool, SetFocusLayer, (app::InterleavedRenderingSettings * this_ptr, int32_t focus_layer_index, int32_t scene_slice_count))
    IL2CPP_REGISTER_METHOD(0x0078D820, bool, ShouldStoreSlice, (app::InterleavedRenderingSettings * this_ptr, int32_t slice_index, int32_t * write_idx))
    IL2CPP_REGISTER_METHOD(0x0078D8C0, bool, ShouldReuseSlice, (app::InterleavedRenderingSettings * this_ptr, int32_t slice_index, int32_t * read_idx))
    IL2CPP_REGISTER_METHOD(0x0078D960, void, Advance, (app::InterleavedRenderingSettings * this_ptr))
}
