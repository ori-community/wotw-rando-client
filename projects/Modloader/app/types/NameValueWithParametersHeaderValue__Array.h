#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NameValueWithParametersHeaderValue__Array__Class.h>
#include <Modloader/app/structs/NameValueWithParametersHeaderValue__Array.h>

namespace app::classes::types {
    namespace NameValueWithParametersHeaderValue__Array {
        namespace {
            inline app::NameValueWithParametersHeaderValue__Array__Class* type_info_ref = nullptr;
        }
        inline app::NameValueWithParametersHeaderValue__Array__Class** type_info = &type_info_ref;
        inline app::NameValueWithParametersHeaderValue__Array__Class* get_class() {
            return il2cpp::get_class<app::NameValueWithParametersHeaderValue__Array__Class>(type_info, "System.Net.Http.Headers", "NameValueWithParametersHeaderValue[]");
        }
        inline app::NameValueWithParametersHeaderValue__Array* create() {
            return il2cpp::create_object<app::NameValueWithParametersHeaderValue__Array>(get_class());
        }
    } // namespace NameValueWithParametersHeaderValue__Array
} // namespace app::classes::types
