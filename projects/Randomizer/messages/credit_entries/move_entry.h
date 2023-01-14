#pragma once

#include <Randomizer/messages/credit_entries/base_entry.h>

#include <Modloader/app/structs/Vector3.h>

#include <memory>
#include <string>
#include <unordered_set>

namespace randomizer::messages::credit_entries {

    struct MoveEntry : public BaseEntry {
    public:
        MoveEntry(float time, float timeout, int id, app::Vector3 start, app::Vector3 end);
        ~MoveEntry() override = default;

        bool resolve(CreditsController* credits, float t) override;
        void reset(CreditsController* credits) override;

    private:
        int m_id = -1;
        app::Vector3 m_start;
        app::Vector3 m_end;
    };
} // namespace randomizer::messages::credit_entries
