#pragma once
#include <Modloader/app/structs/IMethodCallMessage.h>
#include <Modloader/app/structs/IMethodCallMessage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IMethodCallMessage {
        inline app::IMethodCallMessage__Class** type_info() {
            static app::IMethodCallMessage__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IMethodCallMessage__Class**)(modloader::win::memory::resolve_rva(0x04755720));
            }
            return cache;
        }
        inline app::IMethodCallMessage__Class* get_class() {
            return il2cpp::get_class<app::IMethodCallMessage__Class>(type_info(), "System.Runtime.Remoting.Messaging", "IMethodCallMessage");
        }
    } // namespace IMethodCallMessage
} // namespace app::classes::types
