#include <Core/save_meta/save_meta.h>
#include <Core/utils/byte_stream.h>
#include <unordered_map>

namespace core::save_meta {
    // SaveMeta slots that are currently loaded
    std::unordered_map<SaveMetaSlot, std::vector<std::byte>> slots;

    std::vector<std::byte> JsonSaveSerializable::serialize() {
        auto str = this->json_serialize().dump();
        utils::ByteStream stream;
        stream.write_string(str);
        return stream.buffer;
    }

    void JsonSaveSerializable::deserialize(utils::ByteStream &stream) {
        auto length = stream.read<unsigned long>();
        auto str = stream.read_string(length);

        auto j = nlohmann::json::parse(str);
        this->json_deserialize(j);
    }
}