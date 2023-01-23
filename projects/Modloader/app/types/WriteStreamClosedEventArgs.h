#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WriteStreamClosedEventArgs__Class.h>
#include <Modloader/app/structs/WriteStreamClosedEventArgs.h>

namespace app::classes::types {
    namespace WriteStreamClosedEventArgs {
        namespace {
            inline app::WriteStreamClosedEventArgs__Class* type_info_ref = nullptr;
        }
        inline app::WriteStreamClosedEventArgs__Class** type_info = &type_info_ref;
        inline app::WriteStreamClosedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::WriteStreamClosedEventArgs__Class>(type_info, "System.Net", "WriteStreamClosedEventArgs");
        }
        inline app::WriteStreamClosedEventArgs* create() {
            return il2cpp::create_object<app::WriteStreamClosedEventArgs>(get_class());
        }
    } // namespace WriteStreamClosedEventArgs
} // namespace app::classes::types
