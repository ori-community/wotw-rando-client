#pragma once
#include <Modloader/app/structs/SortKeyBuffer.h>
#include <Modloader/app/structs/SortKeyBuffer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SortKeyBuffer {
        inline app::SortKeyBuffer__Class** type_info() {
            static app::SortKeyBuffer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SortKeyBuffer__Class**)(modloader::win::memory::resolve_rva(0x04708468));
            }
            return cache;
        }
        inline app::SortKeyBuffer__Class* get_class() {
            return il2cpp::get_class<app::SortKeyBuffer__Class>(type_info(), "Mono.Globalization.Unicode", "SortKeyBuffer");
        }
        inline app::SortKeyBuffer* create() {
            return il2cpp::create_object<app::SortKeyBuffer>(get_class());
        }
    } // namespace SortKeyBuffer
} // namespace app::classes::types
