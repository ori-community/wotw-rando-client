#pragma once
#include <Modloader/app/structs/ActivityFilter_GetFilterAsTuple_d_7.h>
#include <Modloader/app/structs/ActivityFilter_GetFilterAsTuple_d_7__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActivityFilter_GetFilterAsTuple_d_7 {
        inline app::ActivityFilter_GetFilterAsTuple_d_7__Class** type_info() {
            static app::ActivityFilter_GetFilterAsTuple_d_7__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ActivityFilter_GetFilterAsTuple_d_7__Class**)(modloader::win::memory::resolve_rva(0x0470CD00));
            }
            return cache;
        }
        inline app::ActivityFilter_GetFilterAsTuple_d_7__Class* get_class() {
            return il2cpp::get_nested_class<app::ActivityFilter_GetFilterAsTuple_d_7__Class>(type_info(), "System.Diagnostics.Tracing", "ActivityFilter", "<GetFilterAsTuple>d__7");
        }
        inline app::ActivityFilter_GetFilterAsTuple_d_7* create() {
            return il2cpp::create_object<app::ActivityFilter_GetFilterAsTuple_d_7>(get_class());
        }
    } // namespace ActivityFilter_GetFilterAsTuple_d_7
} // namespace app::classes::types
