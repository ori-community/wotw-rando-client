#pragma once
#include <Modloader/app/structs/ReplayValidator.h>
#include <Modloader/app/structs/ReplayValidator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReplayValidator {
        inline app::ReplayValidator__Class** type_info() {
            static app::ReplayValidator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ReplayValidator__Class**)(modloader::win::memory::resolve_rva(0x0477E970));
            }
            return cache;
        }
        inline app::ReplayValidator__Class* get_class() {
            return il2cpp::get_class<app::ReplayValidator__Class>(type_info(), "Moon.Race", "ReplayValidator");
        }
        inline app::ReplayValidator* create() {
            return il2cpp::create_object<app::ReplayValidator>(get_class());
        }
    } // namespace ReplayValidator
} // namespace app::classes::types
