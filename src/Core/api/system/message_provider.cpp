#include <Core/api/system/message_provider.h>
#include <Modloader/app/types/TranslatedMessageProvider.h>
#include <Modloader/app/types/TranslatedMessageProvider_MessageItem.h>


namespace core::api::system {
    using namespace app::classes;

    namespace {
        app::TranslatedMessageProvider* instantiate_empty_translated_message_provider() {
            static std::optional<il2cpp::WeakGCRef<app::TranslatedMessageProvider>> empty_instance_cache_ref = std::nullopt;

            const auto empty_instance_cache = empty_instance_cache_ref.and_then([](auto& ref) { return *ref; });

            if (!empty_instance_cache.has_value()) {
                const auto empty_instance = types::TranslatedMessageProvider::create();
                TranslatedMessageProvider::ctor(empty_instance);
                empty_instance_cache_ref = il2cpp::WeakGCRef(empty_instance);
                return il2cpp::unity::instantiate_object(empty_instance);
            }

            return il2cpp::unity::instantiate_object(*empty_instance_cache);
        }

        void set_message_provider_string(app::TranslatedMessageProvider* provider, app::String* string) {
            if (provider->fields.Messages->fields._size == 0) {
                const auto item = types::TranslatedMessageProvider_MessageItem::create();
                il2cpp::invoke(provider->fields.Messages, "Add", item);
            }

            auto& item = provider->fields.Messages->fields._items->vector[0];
            item->fields.English = string;
            item->fields.French = string;
            item->fields.Italian = string;
            item->fields.German = string;
            item->fields.Spanish = string;
            item->fields.Japanese = string;
            item->fields.Portuguese = string;
            item->fields.Chinese = string;
            item->fields.Russian = string;
            item->fields.TraditionalChinese = string;
            item->fields.Czech = string;
            item->fields.Danish = string;
            item->fields.Dutch = string;
            item->fields.Finnish = string;
            item->fields.Hungarian = string;
            item->fields.Korean = string;
            item->fields.Norwegian = string;
            item->fields.Polish = string;
            item->fields.SpanishSpain = string;
            item->fields.Swedish = string;
            item->fields.Turkish = string;

            item->fields.Sound = nullptr;
            item->fields.WWiseEvent = nullptr;
            item->fields.Emotion = app::EmotionType__Enum::Neutral;
        }
    }

    app::MessageProvider* create_message_provider(std::string_view string) {
        const auto message_provider = instantiate_empty_translated_message_provider();
        set_message_provider_string(message_provider, il2cpp::string_new(string));
        return reinterpret_cast<app::MessageProvider*>(message_provider);
    }

    app::MessageProvider* create_message_provider(const Property<std::string>& property) {
        return create_message_provider(property.get());
    }
} // namespace core::api::system
