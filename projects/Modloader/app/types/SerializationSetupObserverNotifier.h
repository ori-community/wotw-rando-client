#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SerializationSetupObserverNotifier__Class.h>
#include <Modloader/app/structs/SerializationSetupObserverNotifier.h>

namespace app::classes::types {
    namespace SerializationSetupObserverNotifier {
        inline app::SerializationSetupObserverNotifier__Class** type_info = (app::SerializationSetupObserverNotifier__Class**)(modloader::win::memory::resolve_rva(0x0474AC98));
        inline app::SerializationSetupObserverNotifier__Class* get_class() {
            return il2cpp::get_class<app::SerializationSetupObserverNotifier__Class>(type_info, "", "SerializationSetupObserverNotifier");
        }
        inline app::SerializationSetupObserverNotifier* create() {
            return il2cpp::create_object<app::SerializationSetupObserverNotifier>(get_class());
        }
    } // namespace SerializationSetupObserverNotifier
} // namespace app::classes::types
