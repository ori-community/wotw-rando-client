#pragma once
#include <Modloader/app/structs/UnexceptionalStreamReader.h>
#include <Modloader/app/structs/UnexceptionalStreamReader__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnexceptionalStreamReader {
        inline app::UnexceptionalStreamReader__Class** type_info() {
            static app::UnexceptionalStreamReader__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnexceptionalStreamReader__Class**)(modloader::win::memory::resolve_rva(0x047441A8));
            }
            return cache;
        }
        inline app::UnexceptionalStreamReader__Class* get_class() {
            return il2cpp::get_class<app::UnexceptionalStreamReader__Class>(type_info(), "System.IO", "UnexceptionalStreamReader");
        }
        inline app::UnexceptionalStreamReader* create() {
            return il2cpp::create_object<app::UnexceptionalStreamReader>(get_class());
        }
    } // namespace UnexceptionalStreamReader
} // namespace app::classes::types
