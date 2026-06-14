#pragma once
#include <Modloader/app/structs/ActivityFilter.h>
#include <Modloader/app/structs/ActivityFilter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActivityFilter {
        inline app::ActivityFilter__Class** type_info() {
            static app::ActivityFilter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ActivityFilter__Class**)(modloader::win::memory::resolve_rva(0x04798610));
            }
            return cache;
        }
        inline app::ActivityFilter__Class* get_class() {
            return il2cpp::get_class<app::ActivityFilter__Class>(type_info(), "System.Diagnostics.Tracing", "ActivityFilter");
        }
        inline app::ActivityFilter* create() {
            return il2cpp::create_object<app::ActivityFilter>(get_class());
        }
    } // namespace ActivityFilter
} // namespace app::classes::types
