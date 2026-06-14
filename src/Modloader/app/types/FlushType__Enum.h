#pragma once
#include <Modloader/app/structs/FlushType__Enum.h>
#include <Modloader/app/structs/FlushType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FlushType__Enum {
        inline app::FlushType__Enum__Class** type_info() {
            static app::FlushType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FlushType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04711EB0));
            }
            return cache;
        }
        inline app::FlushType__Enum__Class* get_class() {
            return il2cpp::get_class<app::FlushType__Enum__Class>(type_info(), "Ionic.Zlib", "FlushType");
        }
        inline app::FlushType__Enum* create() {
            return il2cpp::create_object<app::FlushType__Enum>(get_class());
        }
    } // namespace FlushType__Enum
} // namespace app::classes::types
