#pragma once
#include <Modloader/app/structs/DebugValues.h>
#include <Modloader/app/structs/DebugValues__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebugValues {
        inline app::DebugValues__Class** type_info() {
            static app::DebugValues__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DebugValues__Class**)(modloader::win::memory::resolve_rva(0x0478BBE0));
            }
            return cache;
        }
        inline app::DebugValues__Class* get_class() {
            return il2cpp::get_class<app::DebugValues__Class>(type_info(), "Game", "DebugValues");
        }
        inline app::DebugValues* create() {
            return il2cpp::create_object<app::DebugValues>(get_class());
        }
    } // namespace DebugValues
} // namespace app::classes::types
