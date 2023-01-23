#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XsdDuration__Class.h>
#include <Modloader/app/structs/XsdDuration.h>
#include <Modloader/app/structs/XsdDuration__Boxed.h>

namespace app::classes::types {
    namespace XsdDuration {
        namespace {
            inline app::XsdDuration__Class* type_info_ref = nullptr;
        }
        inline app::XsdDuration__Class** type_info = &type_info_ref;
        inline app::XsdDuration__Class* get_class() {
            return il2cpp::get_class<app::XsdDuration__Class>(type_info, "System.Xml.Schema", "XsdDuration");
        }
        inline app::XsdDuration* create() {
            return il2cpp::create_object<app::XsdDuration>(get_class());
        }
        inline app::XsdDuration__Boxed* box(app::XsdDuration value) {
            return il2cpp::box_value<app::XsdDuration__Boxed>(get_class(), value);
        }
    } // namespace XsdDuration
} // namespace app::classes::types
