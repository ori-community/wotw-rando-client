#include <Core/api/game/trials.h>

#include <Modloader/app/methods/GhostManager.h>
#include <Modloader/app/methods/Moon/Race/LeaderBoardService.h>
#include <Modloader/app/methods/Moon/Race/Networking/WebService.h>
#include <Modloader/app/methods/OutputFolder.h>
#include <Modloader/app/methods/RaceFinishIcon.h>
#include <Modloader/app/methods/System/IO/Directory.h>
#include <Modloader/app/methods/System/IO/Path.h>
#include <Modloader/interception_macros.h>

#include <set>

using namespace app::classes;

namespace core::api::game::trials {
    std::set<std::string> ghosts_directory_suffixes;

    namespace {
        std::string get_ghosts_directory_suffix() {
            std::string suffix;

            for (const auto& item: ghosts_directory_suffixes) {
                if (!suffix.empty()) {
                    suffix += "_";
                }

                suffix += item;
            }

            return suffix;
        }

        app::String* get_suffixed_ghost_directory(const std::string& base_name, app::String* race_id) {
            auto output_path_non_host = OutputFolder::get_OutputPathNonHost();
            std::string ghosts_directory_name = "ghosts";

            if (!ghosts_directory_suffixes.empty()) {
                ghosts_directory_name += "_";
                ghosts_directory_name += get_ghosts_directory_suffix();
            }

            auto ghosts_directory_name_str = il2cpp::string_new(ghosts_directory_name);

            auto ghosts_path = System::IO::Path::Combine_1(output_path_non_host, ghosts_directory_name_str);

            if (!System::IO::Directory::Exists(ghosts_path)) {
                System::IO::Directory::CreateDirectory(ghosts_path);
            }

            return System::IO::Path::Combine_1(ghosts_path, race_id);
        }

        IL2CPP_INTERCEPT(
            Moon::Race::LeaderBoardService,
            void,
            UploadReplay_1,
            (app::LeaderBoardService * this_ptr, app::String* race_id, float duration, app::String* replay_data, app::ITrialData* trial_data)
        ) {
            // NOOP
        }

        IL2CPP_INTERCEPT(
            Moon::Race::LeaderBoardService,
            bool,
            UploadReplay_2,
            (app::LeaderBoardService * this_ptr, app::String* race_id, float duration, app::String* replay_data, app::ReplayValidatorData* data)
        ) {
            return false; // NOOP
        }

        IL2CPP_INTERCEPT(Moon::Race::Networking::WebService, void, UploadData, (app::String * site_id, app::ReplayData* data)) {
            // NOOP
        }

        IL2CPP_INTERCEPT(GhostManager, app::String*, GetRaceDirectory, (app::String * race_id)) {
            return get_suffixed_ghost_directory("ghosts", race_id);
        }

        IL2CPP_INTERCEPT(GhostManager, app::String*, GetOfflineRaceDirectory, (app::String * race_id)) {
            return get_suffixed_ghost_directory("offlineGhosts", race_id);
        }

        IL2CPP_INTERCEPT(RaceFinishIcon, void, SetRaceData, (app::RaceFinishIcon * this_ptr, float elapsed_time, bool show_trial_reward)) {
            // TODO: Instead of not showing the reward change the text to show the correct reward instead and disable the spirit light icon
            next::RaceFinishIcon::SetRaceData(this_ptr, elapsed_time, false);
        }
    } // namespace

    void add_ghosts_directory_suffix(std::string suffix) {
        ghosts_directory_suffixes.insert(std::move(suffix));
    }
} // namespace core::api::game::trials
