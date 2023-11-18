#pragma once
#include <Modloader/app/structs/ByteStack.h>
#include <Modloader/app/structs/ByteStack__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ByteStack {
        inline app::ByteStack__Class** type_info() {
            static app::ByteStack__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ByteStack__Class**)(modloader::win::memory::resolve_rva(0x0477E348));
            }
            return cache;
        }
        inline app::ByteStack__Class* get_class() {
            return il2cpp::get_class<app::ByteStack__Class>(type_info(), "System.Xml", "ByteStack");
        }
        inline app::ByteStack* create() {
            return il2cpp::create_object<app::ByteStack>(get_class());
        }
    } // namespace ByteStack
} // namespace app::classes::types
