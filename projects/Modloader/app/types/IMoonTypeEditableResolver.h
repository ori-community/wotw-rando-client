#pragma once
#include <Modloader/app/structs/IMoonTypeEditableResolver.h>
#include <Modloader/app/structs/IMoonTypeEditableResolver__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IMoonTypeEditableResolver {
        inline app::IMoonTypeEditableResolver__Class** type_info() {
            static app::IMoonTypeEditableResolver__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IMoonTypeEditableResolver__Class**)(modloader::win::memory::resolve_rva(0x04799448));
            }
            return cache;
        }
        inline app::IMoonTypeEditableResolver__Class* get_class() {
            return il2cpp::get_class<app::IMoonTypeEditableResolver__Class>(type_info(), "Moon", "IMoonTypeEditableResolver");
        }
    } // namespace IMoonTypeEditableResolver
} // namespace app::classes::types
