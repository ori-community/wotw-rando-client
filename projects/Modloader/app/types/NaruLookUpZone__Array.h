#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NaruLookUpZone__Array__Class.h>
#include <Modloader/app/structs/NaruLookUpZone__Array.h>

namespace app::classes::types {
    namespace NaruLookUpZone__Array {
        namespace {
            inline app::NaruLookUpZone__Array__Class* type_info_ref = nullptr;
        }
        inline app::NaruLookUpZone__Array__Class** type_info = &type_info_ref;
        inline app::NaruLookUpZone__Array__Class* get_class() {
            return il2cpp::get_class<app::NaruLookUpZone__Array__Class>(type_info, "", "NaruLookUpZone[]");
        }
        inline app::NaruLookUpZone__Array* create() {
            return il2cpp::create_object<app::NaruLookUpZone__Array>(get_class());
        }
    } // namespace NaruLookUpZone__Array
} // namespace app::classes::types
