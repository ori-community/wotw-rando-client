#pragma once
#include <Modloader/app/structs/NclUtilities.h>
#include <Modloader/app/structs/NclUtilities__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NclUtilities {
        inline app::NclUtilities__Class** type_info() {
            static app::NclUtilities__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NclUtilities__Class**)(modloader::win::memory::resolve_rva(0x0473A048));
            }
            return cache;
        }
        inline app::NclUtilities__Class* get_class() {
            return il2cpp::get_class<app::NclUtilities__Class>(type_info(), "System.Net", "NclUtilities");
        }
        inline app::NclUtilities* create() {
            return il2cpp::create_object<app::NclUtilities>(get_class());
        }
    } // namespace NclUtilities
} // namespace app::classes::types
