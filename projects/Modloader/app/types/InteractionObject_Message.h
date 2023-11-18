#pragma once
#include <Modloader/app/structs/InteractionObject_Message.h>
#include <Modloader/app/structs/InteractionObject_Message__Array.h>
#include <Modloader/app/structs/InteractionObject_Message__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InteractionObject_Message {
        inline app::InteractionObject_Message__Class** type_info() {
            static app::InteractionObject_Message__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InteractionObject_Message__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InteractionObject_Message__Class* get_class() {
            return il2cpp::get_nested_class<app::InteractionObject_Message__Class>(type_info(), "RootMotion.FinalIK", "InteractionObject", "Message");
        }
        inline app::InteractionObject_Message* create() {
            return il2cpp::create_object<app::InteractionObject_Message>(get_class());
        }
        inline app::InteractionObject_Message__Array* create_array(int size) {
            return il2cpp::array_new<app::InteractionObject_Message__Array>(get_class(), size);
        }
        inline app::InteractionObject_Message__Array* create_array(const std::vector<app::InteractionObject_Message*>& items) {
            return il2cpp::array_new<app::InteractionObject_Message__Array>(get_class(), items);
        }
    } // namespace InteractionObject_Message
} // namespace app::classes::types
