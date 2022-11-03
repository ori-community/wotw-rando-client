#include <randomizer/collision.h>

#include <quadtree/quadtree.h>

#include <algorithm>
#include <iterator>
#include <unordered_map>

namespace {
    enum class NodeType {
        Rect,
        Circle
    };

    struct Node {
        int id;
        quadtree::Box<float> box;
    };

    using get_box = quadtree::Box<float> (*)(Node* node);
    quadtree::Box<float> get_node_box(Node* node) {
        return node->box;
    }

    int next = 1;
    quadtree::Box<float> main;
    std::unordered_map<int, std::unique_ptr<Node>> nodes;
    quadtree::Quadtree<Node*, get_box> tree(main, get_node_box);
    std::vector<int> last_results;
} // namespace

RANDOMIZER_C_DLLEXPORT int collision_reserve_id() {
    return next++;
}

RANDOMIZER_C_DLLEXPORT int collision_query(app::Vector2 position, app::Vector2 size) {
    quadtree::Box<float> box(
            quadtree::Vector2(position.x, position.y),
            quadtree::Vector2(size.x, size.y)
    );

    auto output = tree.query(box);
    last_results.clear();
    std::transform(output.begin(), output.end(), std::back_inserter(last_results), [](auto in) { return in->id; });
    return last_results.size();
}

RANDOMIZER_C_DLLEXPORT void collision_query_result(int* buffer, int size) {
    std::memcpy(buffer, last_results.data(), std::min(static_cast<int>(last_results.size()), size));
}

RANDOMIZER_C_DLLEXPORT void collision_add_rect(int id, app::Vector2 position, app::Vector2 size) {
    auto it = nodes.find(id);
    if (it != nodes.end())
        collision_remove(id);

    quadtree::Box<float> box(
            quadtree::Vector2(position.x, position.y),
            quadtree::Vector2(size.x, size.y)
    );

    auto node = std::make_unique<Node>();
    node->id = id;
    node->box = quadtree::Box<float>(
            quadtree::Vector2(position.x, position.y),
            quadtree::Vector2(size.x, size.y)
    );

    tree.add(node.get());
    nodes.emplace(id, std::move(node));
}

RANDOMIZER_C_DLLEXPORT void collision_remove(int id) {
    auto it = nodes.find(id);
    if (it == nodes.end())
        return;

    tree.remove(it->second.get());
    nodes.erase(it);
}

RANDOMIZER_C_DLLEXPORT void collision_clear() {
    tree = quadtree::Quadtree<Node*, get_box>(main, get_node_box);
    nodes.clear();
    next = 1;
}
