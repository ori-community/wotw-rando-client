#pragma once
#include <Modloader/app/structs/TypeDescriptor_ComNativeDescriptionProvider.h>
#include <Modloader/app/structs/TypeDescriptor_ComNativeDescriptionProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeDescriptor_ComNativeDescriptionProvider {
        inline app::TypeDescriptor_ComNativeDescriptionProvider__Class** type_info() {
            static app::TypeDescriptor_ComNativeDescriptionProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TypeDescriptor_ComNativeDescriptionProvider__Class**)(modloader::win::memory::resolve_rva(0x04719C90));
            }
            return cache;
        }
        inline app::TypeDescriptor_ComNativeDescriptionProvider__Class* get_class() {
            return il2cpp::get_nested_class<app::TypeDescriptor_ComNativeDescriptionProvider__Class>(type_info(), "System.ComponentModel", "TypeDescriptor", "ComNativeDescriptionProvider");
        }
        inline app::TypeDescriptor_ComNativeDescriptionProvider* create() {
            return il2cpp::create_object<app::TypeDescriptor_ComNativeDescriptionProvider>(get_class());
        }
    } // namespace TypeDescriptor_ComNativeDescriptionProvider
} // namespace app::classes::types
