#include <Common/ext.h>
#include <Core/utils/json_serializers.h>
#include <Modloader/common.h>
#include <TAS/runtime/timeline_json_loader.h>

#include <utility>

namespace tas::runtime::timeline {
    void load_from_json(Timeline& timeline, const nlohmann::json& j) {
        try {
            timeline.set_fps(j.value<unsigned int>("fps", 60));

            std::vector<std::shared_ptr<TimelineEntry>> entries;
            auto j_entries = j.at("timeline").items();
            for (const auto& j_entry_it : j_entries) {
                auto j_entry = j_entry_it.value();
                auto type = j_entry.at("type").get<TimelineEntryType>();

                switch (type) {
                    case TimelineEntryType::Invalid: {
                        modloader::warn("TAS", fmt::format("Encountered unknown entry type '{}', ignoring entry", j_entry.at("type").get<std::string>()));
                    } break;

                    case TimelineEntryType::Action: {
                        entries.push_back(std::move(std::make_shared<ActionTimelineEntry>(
                                j_entry.at("frame").get<unsigned long>(),
                                j_entry.at("duration").get<unsigned long>(),
                                j_entry.at("action").get<Action>()
                        )));
                    } break;

                    case TimelineEntryType::Angle: {
                        entries.push_back(std::move(std::make_shared<AngleTimelineEntry>(
                                j_entry.at("frame").get<unsigned long>(),
                                j_entry.at("duration").get<unsigned long>(),
                                j_entry.at("angle").get<ControllerAngle>(),
                                j_entry.at("degrees").get<float>()
                        )));
                    } break;

                    case TimelineEntryType::Axis: {
                        entries.push_back(std::move(std::make_shared<AxisTimelineEntry>(
                                j_entry.at("frame").get<unsigned long>(),
                                j_entry.at("duration").get<unsigned long>(),
                                j_entry.at("axis").get<ControllerAxis>(),
                                j_entry.at("value").get<float>()
                        )));
                    } break;

                    case TimelineEntryType::MouseAngle: {
                        entries.push_back(std::move(std::make_shared<MouseAngleTimelineEntry>(
                                j_entry.at("frame").get<unsigned long>(),
                                j_entry.at("degrees").get<float>(),
                                j_entry.value<float>("distance", 3.f)
                        )));
                    } break;

                    case TimelineEntryType::MousePosition: {
                        entries.push_back(std::move(std::make_shared<MousePositionTimelineEntry>(
                                j_entry.at("frame").get<unsigned long>(),
                                j_entry.value<core::input::MousePositionSimulationMode>("mode", core::input::MousePositionSimulationMode::UI),
                                j_entry.at("x").get<float>(),
                                j_entry.at("y").get<float>()
                        )));
                    } break;

                    case TimelineEntryType::Position: {
                        entries.push_back(std::move(std::make_shared<PositionTimelineEntry>(
                                j_entry.at("frame").get<unsigned long>(),
                                j_entry.at("x").get<float>(),
                                j_entry.at("y").get<float>()
                        )));
                    } break;

                    case TimelineEntryType::RNGState: {
                        entries.push_back(std::move(std::make_shared<RNGStateTimelineEntry>(
                                j_entry.at("frame").get<unsigned long>(),
                                j_entry.at("state").get<int>()
                        )));
                    } break;
                }
            }

            timeline.load_entries(std::move(entries));
        } catch (std::exception& e) {
            modloader::warn("TAS", fmt::format("Failed to load TAS timeline: {}", e.what()));
        }
    }

    void load_from_json_file(Timeline& timeline, std::string path) {
        nlohmann::json j;

        if (load_json_file(std::move(path), j)) {
            load_from_json(timeline, j);
        }
    }
} // namespace tas::runtime::timeline