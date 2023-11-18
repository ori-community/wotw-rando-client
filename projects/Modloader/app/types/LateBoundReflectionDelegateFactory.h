#pragma once
#include <Modloader/app/structs/LateBoundReflectionDelegateFactory.h>
#include <Modloader/app/structs/LateBoundReflectionDelegateFactory__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LateBoundReflectionDelegateFactory {
        inline app::LateBoundReflectionDelegateFactory__Class** type_info() {
            static app::LateBoundReflectionDelegateFactory__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LateBoundReflectionDelegateFactory__Class**)(modloader::win::memory::resolve_rva(0x04741718));
            }
            return cache;
        }
        inline app::LateBoundReflectionDelegateFactory__Class* get_class() {
            return il2cpp::get_class<app::LateBoundReflectionDelegateFactory__Class>(type_info(), "Newtonsoft.Json.Utilities", "LateBoundReflectionDelegateFactory");
        }
        inline app::LateBoundReflectionDelegateFactory* create() {
            return il2cpp::create_object<app::LateBoundReflectionDelegateFactory>(get_class());
        }
    } // namespace LateBoundReflectionDelegateFactory
} // namespace app::classes::types
