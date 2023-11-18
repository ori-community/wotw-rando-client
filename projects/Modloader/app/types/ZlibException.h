#pragma once
#include <Modloader/app/structs/ZlibException.h>
#include <Modloader/app/structs/ZlibException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ZlibException {
        inline app::ZlibException__Class** type_info() {
            static app::ZlibException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ZlibException__Class**)(modloader::win::memory::resolve_rva(0x04757328));
            }
            return cache;
        }
        inline app::ZlibException__Class* get_class() {
            return il2cpp::get_class<app::ZlibException__Class>(type_info(), "Ionic.Zlib", "ZlibException");
        }
        inline app::ZlibException* create() {
            return il2cpp::create_object<app::ZlibException>(get_class());
        }
    } // namespace ZlibException
} // namespace app::classes::types
