#pragma once

#include <condition_variable>
#include <mutex>
#include <queue>

namespace common {
    template <class T>
    class BlockingQueue {
    public:
        void enqueue(T value) {
            std::lock_guard<std::mutex> lock(m_mutex);
            m_queue.push(value);
            m_condition.notify_one();
        }

        T dequeue() {
            std::unique_lock<std::mutex> lock(m_mutex);
            while (m_queue.empty()) {
                m_condition.wait(lock);
            }

            T value = m_queue.front();
            m_queue.pop();
            return value;
        }

    private:
        std::queue<T> m_queue;
        mutable std::mutex m_mutex;
        std::condition_variable m_condition;
    };
} // namespace common