#include <Randomizer/seed/relics.h>
#include <randomizer.h>

namespace randomizer::seed {
    void Relics::add(relic_location const& location, const std::optional<std::string>& flavor_name) {
        const auto area = location_collection().area(location);
        ++m_relic_count;
        m_relics[area][location] = flavor_name.has_value()
            ? flavor_name.value()
            : location_data::area_to_short_name(area);
    }

    void Relics::clear() {
        m_relics.clear();
        m_relic_count = 0;
    }

    std::string Relics::relic_name(relic_location const& location) const {
        const auto area = location_collection().area(location);
        const auto relic_area = m_relics.find(area);
        if (relic_area == m_relics.end()) {
            return "Unknown";
        }

        const auto relic = relic_area->second.find(location);
        return relic == relic_area->second.end() ? "Unknown" : relic->second;
    }

    std::vector<Relics::relic_location> Relics::relics() const {
        std::vector<relic_location> output;
        for (auto relics : m_relics | std::views::values) {
            for (const auto relic : relics | std::views::keys) {
                output.push_back(relic);
            }
        }

        return output;
    }

    std::vector<Relics::relic_location> Relics::relics_in_area(const GameArea area) const {
        std::vector<relic_location> output;
        const auto relics = m_relics.find(area);
        if (relics == m_relics.end()) {
            return output;
        }

        for (const auto relic : relics->second | std::views::keys) {
            output.push_back(relic);
        }

        return output;
    }

    int Relics::found_relics() const {
        int found = 0;
        for (auto relics : m_relics | std::views::values) {
            for (const auto relic : relics | std::views::keys) {
                if (relic.resolve()) {
                    ++found;
                }
            }
        }

        return found;
    }

    int Relics::found_relics_in_area(const GameArea area) const {
        int found = 0;
        const auto relics = m_relics.find(area);
        if (relics == m_relics.end()) {
            return found;
        }

        for (const auto relic : relics->second | std::views::keys) {
            if (relic.resolve()) {
                ++found;
            }
        }

        return found;
    }

    int Relics::relic_count() const {
        int count = 0;
        for (auto relics : m_relics | std::views::values) {
            count += relics.size();
        }

        return count;
    }

    int Relics::relic_count_in_area(const GameArea area) const {
        const auto relics = m_relics.find(area);
        return relics == m_relics.end() ? 0 : relics->second.size();
    }
}
