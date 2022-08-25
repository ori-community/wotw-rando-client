#include <randomizer/pickups/pickup.h>

namespace randomizer {
    void PickupList::grant() {
        if (pickups.empty())
            return;

        std::string grantMessage = "";
        //bool squelchActive = Children.Exists(p = > p is Message msg && msg.Squelch);
        for (auto& pickup : pickups) {
            //if (pickup is ConditionalStop s && s.StopActive())
            //    break;

            pickup->grant();
            //if (child.Muted || child.DisplayName == Pickup.DisplayNameEmpty || child.Frames == 0 || squelchActive && !(child is Message m && m.Squelch) || child is Message _m && _m.Prepend)
            //    continue;
            //
            //grantMessage += child.DisplayName + (child.DisplayName.EndsWith("<\\>") ? "" : "\n");
        }

        //if (grantMessage == string.Empty)
        //    grantMessage = DisplayNameEmpty;

        // grantMessage.TrimEnd('\n');
        //if (Frames > 0 && grantMessage != DisplayNameEmpty && !Muted)
        //    MessageController.ShowPickup(grantMessage, Frames / 60.0f, position);
    }

    bool PickupList::collect(uber_states::UberStateCondition condition) {
        return false;
    }

    void PickupList::add(std::shared_ptr<Pickup>&& p) {
        pickups.push_back(std::move(p));
    }

    bool PickupList::empty() const {
        return pickups.empty();
    }
    
    std::string PickupList::display_name() const {
        //bool squelchActive = pickup.Exists(p = > p is Message msg && msg.Squelch);
        //var ret = "";
        //foreach (var child in Children) {
        //    if (child is ConditionalStop s && s.StopActive())
        //        break;
        //
        //    if (child.Muted || child.DisplayName == DisplayNameEmpty || child.Frames == 0 ||
        //        squelchActive && !(child is Message m && m.Squelch) || child is Message _m && _m.Prepend)
        //        continue;
        //
        //    ret += child.DisplayName + (child.DisplayName.EndsWith("<\\>") ? "" : "\n");
        //}
        //
        //ret = ret.TrimEnd('\n');
        //return ret == string.Empty ? DisplayNameEmpty : ret;
        return "";
    }
} // namespace randomizer
