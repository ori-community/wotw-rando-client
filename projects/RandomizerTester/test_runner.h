#pragma once

#include <Modloader/windows_api/console.h>

#include <memory>
#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace randomizer_tester {
    struct ITest {
        virtual ~ITest() = default;
        virtual bool arguments(std::span<modloader::win::console::CommandParam const> args) = 0;
        virtual void start() = 0;
        virtual void update(float dt) = 0;
        virtual void stop() = 0;
    };

    template <typename T>
    struct Test : ITest {
        ~Test() override = default;

        using args_callback = bool (*)(Test<T>& test, std::span<modloader::win::console::CommandParam const> args);
        using callback = void (*)(Test<T>& test);

        Test(callback t_start, callback t_update, callback t_stop)
                : m_inner_arguments()
                , m_inner_start(t_start)
                , m_inner_update(t_update)
                , m_inner_stop(t_stop) {}

        Test(args_callback t_arguments, callback t_start, callback t_update, callback t_stop)
                : m_inner_arguments(t_arguments)
                , m_inner_start(t_start)
                , m_inner_update(t_update)
                , m_inner_stop(t_stop) {}

        bool arguments(std::span<modloader::win::console::CommandParam const> args) final {
            return !m_inner_arguments || m_inner_arguments(*this, args);
        }

        void start() final {
            running = true;
            m_inner_start(*this);
        }

        void update(float dt) final {
            delta_time = dt;
            total_time += dt;
            m_inner_update(*this);
        }

        void stop() final {
            m_inner_stop(*this);
        }

        T data;
        float delta_time = 0;
        float total_time = 0;
        bool running = false;

    private:
        args_callback m_inner_arguments;
        callback m_inner_start;
        callback m_inner_update;
        callback m_inner_stop;
    };

    using test_creator = std::shared_ptr<ITest> (*)();

    bool is_test_running(std::string_view id);
    bool start_test(std::string_view id, std::shared_ptr<ITest> test, std::span<modloader::win::console::CommandParam const> args);
    bool stop_test(std::string_view id);
    void create_console_command(std::vector<std::string> const& path, std::string id, test_creator creator);
} // namespace randomizer_tester
