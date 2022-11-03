#include "plugins.h"
#include "plugins/update_active_animations_plugin.h"

#include <map>
#include <sstream>
#include <memory>

namespace ghosts::plugins {
    std::map<RandoGhostFrameDataType, std::shared_ptr<RandoGhostPlugin>> plugins {
        {RandoGhostFrameDataType::UpdateActiveAnimations, std::make_shared<UpdateActiveAnimationsPlugin>()}
    };

    void play_rando_ghost_plugins(utils::ByteStream& stream, RandoGhost& ghost) {
        while (stream.available()) {
            auto data_type = static_cast<RandoGhostFrameDataType>(stream.peek());

            if (plugins.contains(data_type)) {
                stream.skip(1);
                plugins[data_type].get()->play(stream, ghost);
            } else {
                // We reached the vanilla bytes, so we abort reading rando ghost frames
                return;
            }
        }
    }

    std::vector<std::byte> record_rando_ghost_plugins(app::GhostRecorder* recorder) {
        std::vector<std::byte> data;

        for (const auto& item : plugins) {
            auto bytes = item.second->record(recorder);
            if (!bytes.empty()) {
                data.push_back(static_cast<std::byte>(item.first));
                data.insert(data.end(), bytes.begin(), bytes.end());
            }
        }

        return data;
    }
}