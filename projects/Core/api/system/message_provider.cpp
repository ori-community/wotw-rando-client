#include <Core/api/system/message_provider.h>


namespace core::api::system {
    using namespace app::classes;

    app::TranslatedMessageProvider* instantiate_empty_translated_message_provider() {
        static app::TranslatedMessageProvider* empty_instance_cache = nullptr;

        if (!il2cpp::unity::is_valid(empty_instance_cache)) {
            empty_instance_cache = types::TranslatedMessageProvider::create();
            TranslatedMessageProvider::ctor(empty_instance_cache);
        }

        return il2cpp::unity::instantiate_object(empty_instance_cache);
    }
} // namespace core::api::system
