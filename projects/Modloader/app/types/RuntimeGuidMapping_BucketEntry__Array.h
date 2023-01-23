#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RuntimeGuidMapping_BucketEntry__Array__Class.h>
#include <Modloader/app/structs/RuntimeGuidMapping_BucketEntry__Array.h>

namespace app::classes::types {
    namespace RuntimeGuidMapping_BucketEntry__Array {
        inline app::RuntimeGuidMapping_BucketEntry__Array__Class** type_info = (app::RuntimeGuidMapping_BucketEntry__Array__Class**)(modloader::win::memory::resolve_rva(0x04764470));
        inline app::RuntimeGuidMapping_BucketEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::RuntimeGuidMapping_BucketEntry__Array__Class>(type_info, "", "RuntimeGuidMapping+BucketEntry[]");
        }
        inline app::RuntimeGuidMapping_BucketEntry__Array* create() {
            return il2cpp::create_object<app::RuntimeGuidMapping_BucketEntry__Array>(get_class());
        }
    } // namespace RuntimeGuidMapping_BucketEntry__Array
} // namespace app::classes::types
