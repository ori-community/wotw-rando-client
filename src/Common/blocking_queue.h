#pragma once

#include <condition_variable>
#include <mutex>
#include <queue>

namespace common {
    template<class T>
    class BlockingQueue {
    public:
        void enqueue(T value) {
            std::lock_guard lock(m_mutex);
            m_queue.push(value);
            m_condition.notify_one();
        }

        std::optional<T> dequeue() {
            std::unique_lock lock(m_mutex);
            while (m_queue.empty()) {
                m_condition.wait(lock);
                if (m_interrupted) {
                    m_interrupted = false;
                    return std::nullopt;
                }
            }

            T value = m_queue.front();
            m_queue.pop();
            return value;
        }

        void interrupt() {
            m_interrupted = true;
            m_condition.notify_all();
        }

    private:
        std::queue<T> m_queue;
        mutable std::mutex m_mutex;
        std::condition_variable m_condition;
        bool m_interrupted = false;
    };
} // namespace common
