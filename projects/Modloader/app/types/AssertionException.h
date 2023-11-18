#pragma once
#include <Modloader/app/structs/AssertionException.h>
#include <Modloader/app/structs/AssertionException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AssertionException {
        inline app::AssertionException__Class** type_info() {
            static app::AssertionException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AssertionException__Class**)(modloader::win::memory::resolve_rva(0x0474B030));
            }
            return cache;
        }
        inline app::AssertionException__Class* get_class() {
            return il2cpp::get_class<app::AssertionException__Class>(type_info(), "UnityEngine.Assertions", "AssertionException");
        }
        inline app::AssertionException* create() {
            return il2cpp::create_object<app::AssertionException>(get_class());
        }
    } // namespace AssertionException
} // namespace app::classes::types
