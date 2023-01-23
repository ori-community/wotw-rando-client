#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ReviewTargetMetadata__Array__Class.h>
#include <Modloader/app/structs/ReviewTargetMetadata__Array.h>

namespace app::classes::types {
    namespace ReviewTargetMetadata__Array {
        namespace {
            inline app::ReviewTargetMetadata__Array__Class* type_info_ref = nullptr;
        }
        inline app::ReviewTargetMetadata__Array__Class** type_info = &type_info_ref;
        inline app::ReviewTargetMetadata__Array__Class* get_class() {
            return il2cpp::get_class<app::ReviewTargetMetadata__Array__Class>(type_info, "Moon.ReviewFramework", "ReviewTargetMetadata[]");
        }
        inline app::ReviewTargetMetadata__Array* create() {
            return il2cpp::create_object<app::ReviewTargetMetadata__Array>(get_class());
        }
    } // namespace ReviewTargetMetadata__Array
} // namespace app::classes::types
