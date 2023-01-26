#pragma once
#include <Modloader/app/structs/DateTimeFacetsChecker.h>
#include <Modloader/app/structs/DateTimeFacetsChecker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DateTimeFacetsChecker {
        inline app::DateTimeFacetsChecker__Class** type_info() {
            static app::DateTimeFacetsChecker__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DateTimeFacetsChecker__Class**)(modloader::win::memory::resolve_rva(0x04756608));
            }
            return cache;
        }
        inline app::DateTimeFacetsChecker__Class* get_class() {
            return il2cpp::get_class<app::DateTimeFacetsChecker__Class>(type_info(), "System.Xml.Schema", "DateTimeFacetsChecker");
        }
        inline app::DateTimeFacetsChecker* create() {
            return il2cpp::create_object<app::DateTimeFacetsChecker>(get_class());
        }
    } // namespace DateTimeFacetsChecker
} // namespace app::classes::types
