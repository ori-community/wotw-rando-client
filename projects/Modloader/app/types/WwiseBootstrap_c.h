#pragma once
#include <Modloader/app/structs/WwiseBootstrap_c.h>
#include <Modloader/app/structs/WwiseBootstrap_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WwiseBootstrap_c {
        inline app::WwiseBootstrap_c__Class** type_info() {
            static app::WwiseBootstrap_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WwiseBootstrap_c__Class**)(modloader::win::memory::resolve_rva(0x04733488));
            }
            return cache;
        }
        inline app::WwiseBootstrap_c__Class* get_class() {
            return il2cpp::get_nested_class<app::WwiseBootstrap_c__Class>(type_info(), "Moon.Wwise", "WwiseBootstrap", "<>c");
        }
        inline app::WwiseBootstrap_c* create() {
            return il2cpp::create_object<app::WwiseBootstrap_c>(get_class());
        }
    } // namespace WwiseBootstrap_c
} // namespace app::classes::types
