#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ClipAnimation_EventMetadata__Class.h>
#include <Modloader/app/structs/ClipAnimation_EventMetadata.h>
#include <Modloader/app/structs/ClipAnimation_EventMetadata__Array.h>

namespace app::classes::types {
    namespace ClipAnimation_EventMetadata {
        namespace {
            inline app::ClipAnimation_EventMetadata__Class* type_info_ref = nullptr;
        }
        inline app::ClipAnimation_EventMetadata__Class** type_info = &type_info_ref;
        inline app::ClipAnimation_EventMetadata__Class* get_class() {
            return il2cpp::get_nested_class<app::ClipAnimation_EventMetadata__Class>(type_info, "Moon", "ClipAnimation", "EventMetadata");
        }
        inline app::ClipAnimation_EventMetadata* create() {
            return il2cpp::create_object<app::ClipAnimation_EventMetadata>(get_class());
        }
        inline app::ClipAnimation_EventMetadata__Array* create_array(int size) {
            return il2cpp::array_new<app::ClipAnimation_EventMetadata__Array>(get_class(), size);
        }
        inline app::ClipAnimation_EventMetadata__Array* create_array(const std::vector<app::ClipAnimation_EventMetadata*>& items) {
            return il2cpp::array_new<app::ClipAnimation_EventMetadata__Array>(get_class(), items);
        }
    } // namespace ClipAnimation_EventMetadata
} // namespace app::classes::types
