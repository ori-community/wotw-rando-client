#pragma once
#include <Modloader/app/structs/SizeT.h>
#include <Modloader/app/structs/SizeT__Boxed.h>
#include <Modloader/app/structs/SizeT__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SizeT {
        inline app::SizeT__Class** type_info() {
            static app::SizeT__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SizeT__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SizeT__Class* get_class() {
            return il2cpp::get_class<app::SizeT__Class>(type_info(), "XGamingRuntime.Interop", "SizeT");
        }
        inline app::SizeT* create() {
            return il2cpp::create_object<app::SizeT>(get_class());
        }
        inline app::SizeT__Boxed* box(app::SizeT value) {
            return il2cpp::box_value<app::SizeT__Boxed>(get_class(), value);
        }
    } // namespace SizeT
} // namespace app::classes::types
